

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(clang_plugin_test)

SET( CMAKE_BUILD_TYPE DEBUG )

set( optimizer_plugin_LIBRARY optimizer_plugin_LIBRARY-NOTFOUND )

# find the packages needed to run the plugin
find_package( optimizer_plugin )
find_package( pluto )
find_package( pluto_codegen_cxx )
find_package( pet )

# TODO write a file with the paths from the find_package commands
#      emit the optimizer plugins path 
#      emit the library_paths so we can add them to our LD_LIBRARY_PATHS

# TODO get the paths from the librarys that are used 
# TODO add the paths for polycc 

get_filename_component( PLUTO_LIBRARY_PATH ${PLUTO_LIBRARY} DIRECTORY )
get_filename_component( PLUTO_CODEGEN_CXX_LIBRARY_PATH ${PLUTO_CODEGEN_CXX_LIBRARY} DIRECTORY )
get_filename_component( PET_LIBRARY_PATH ${PET_LIBRARY} DIRECTORY )


file( WRITE program_paths.sh "
export FIXIT_COMPILER=${CLANG_EXECUTABLE_PATH}
export PLUGIN_PATH=${OPTIMIZER_PLUGIN_LIBRARY}
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${PLUTO_LIBRARY_PATH}:${PLUTO_CODEGEN_CXX_LIBRARY_PATH}:${PET_LIBRARY_PATH}
" )

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
  add_test( NAME ${dir}_pet_pluto COMMAND test_optimize.sh 1d/${dir} )
  add_test( NAME ${dir}_polycc COMMAND test_optimize_polycc.sh 1d/${dir} )
ENDFOREACH()


FOREACH( dir ${SUBDIRS_2D} ) 
  add_test( NAME ${dir}_pet_pluto COMMAND test_optimize.sh 2d/${dir} )
  add_test( NAME ${dir}_polycc COMMAND test_optimize_polycc.sh 2d/${dir} )
ENDFOREACH()



















