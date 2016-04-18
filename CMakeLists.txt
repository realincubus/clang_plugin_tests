

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(clang_plugin_test)

SET( CMAKE_BUILD_TYPE DEBUG )

SET( CMAKE_C_COMPILER clang )
SET( CMAKE_CXX_COMPILER clang++ )
SET( CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -march=native" )
SET( CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall -pedantic -DGLIBCXX_DEBUG -fsanitize=address" )
SET( CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} ${CMAKE_CXX_FLAGS} -std=c++1y " )

#SET( PLUGIN_FLAGS "-Xclang -load -Xclang /home/incubus/llvm_patch_test/build/lib/ClanPlugin.so -Xclang -add-plugin -Xclang clan -Xclang -plugin-arg-clan -Xclang -emit-openmp " )

SET( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${PLUGIN_FLAGS}")

SET( CMAKE_EXPORT_COMPILE_COMMANDS on )

SET( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin )
SET( LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib )

# generate the optimized application source 
add_executable(generator IMPORTED)
set_property(TARGET generator PROPERTY IMPORTED_LOCATION "clang++")

macro ( generate_and_compile SRC )

  #get_filename_component( FILE_NAME ${SRC} NAME_WE )
  get_filename_component( FILE_PATH ${SRC} PATH )
  get_filename_component( DIR_NAME ${FILE_PATH} NAME )

  # build the normal application 
  ADD_EXECUTABLE(bin_${DIR_NAME} ${SRC} )
 
  ## generate the possibly optimized code 
  #set( GENERATOR_SRC ${SRC} )
  #set( GENERATED_SRC ${FILE_PATH}/${FILE_NAME}.opt.cpp )
  #string(REPLACE " " ";" GENERATOR_ARGS "${CMAKE_CXX_FLAGS}")
  #add_custom_command(
  #  OUTPUT ${GENERATED_SRC}
  #  DEPENDS ${GENERATOR_SRC}
  #  COMMAND generator ${GENERATOR_ARGS} -Xclang -fixit=opt -c ${GENERATOR_SRC}
  #)

  ## build the optimized application based on the source that was generated  
  #ADD_EXECUTABLE(bin_${DIR_NAME}_opt ${GENERATED_SRC} )

  ## add a test that will compare the optimied code against a reference file
  #add_test( NAME ${DIR_NAME} COMMAND cmp ${GENERATED_SRC} ${FILE_PATH}/${FILE_NAME}.reference.cpp )

endmacro( generate_and_compile )

MACRO(SUBDIRLIST result curdir)
  FILE(GLOB children RELATIVE ${curdir} ${curdir}/*)
  SET(dirlist "")
  FOREACH(child ${children})
    IF(IS_DIRECTORY ${curdir}/${child})
        LIST(APPEND dirlist ${child})
    ENDIF()
  ENDFOREACH()
  SET(${result} ${dirlist})
ENDMACRO()


SUBDIRLIST(SUBDIRS_1D ${CMAKE_CURRENT_BINARY_DIR}/1d )
SUBDIRLIST(SUBDIRS_2D ${CMAKE_CURRENT_BINARY_DIR}/2d )

enable_testing()

FOREACH( dir ${SUBDIRS_1D} ) 
	generate_and_compile( 1d/${dir}/main.cpp  )
ENDFOREACH()

FOREACH( dir ${SUBDIRS_2D} ) 
	generate_and_compile( 2d/${dir}/main.cpp  )
ENDFOREACH()


FOREACH( dir ${SUBDIRS_1D} ) 
  add_test( NAME ${dir} COMMAND test_optimize.sh 1d/${dir} )
ENDFOREACH()


FOREACH( dir ${SUBDIRS_2D} ) 
  add_test( NAME ${dir} COMMAND test_optimize.sh 2d/${dir} )
ENDFOREACH()



















