#!/bin/bash

SOURCE="main.cpp"
SOURCE_FIXIT_NAME="$(basename --suffix=.cpp $SOURCE).opt.cpp"
SOURCE_CLAN="main.clan.cpp"
SOURCE_REFERENCE="main.reference.cpp"
POLYCC_RESULT="main.polycc.cpp"

COMPILER="g++"
COMPILER_FLAGS="-std=c++11 -O3"

# compiler driven
OMP_COMPILER_FLAGS="-std=c++11 -fopenmp -O3"
ACC_COMPILER_FLAGS="-std=c++11 -fopenacc -O3"
CILK_COMPILER_FLAGS="-std=c++11 -fcilkplus -O3"
# library driven 
# hpx needs c++14 support
HPX_COMPILER_FLAGS="-std=c++14 -O3 -lhpx /usr/lib/libhpx_init.a -lboost_chrono -lboost_date_time -lboost_filesystem -lboost_program_options -lboost_regex -lboost_system -lboost_thread -lpthread -lboost_context -lboost_random -lboost_atomic"
TBB_COMPILER_FLAGS="-std=c++11 -O3 -ltbb"

#BACKENDS="-emit-openmp -emit-openacc -emit-tbb -emit-hpx -emit-cilk"

#common flags 
FIXIT_COMPILER_FLAGS="-std=c++11 -O0 -g -fsyntax-only"
PLUGIN_FLAGS="$FIXIT_COMPILER_FLAGS -Xclang -load -Xclang $PLUGIN_PATH -Xclang -add-plugin -Xclang clan -Xclang -plugin-arg-clan -Xclang -write-cloog-file -Xclang -plugin-arg-clan -Xclang"

OMP_FIXER_FLAGS="$PLUGIN_FLAGS -emit-openmp"
ACC_FIXER_FLAGS="$PLUGIN_FLAGS -emit-openacc"
CILK_FIXER_FLAGS="$PLUGIN_FLAGS -emit-cilk"
HPX_FIXER_FLAGS="$PLUGIN_FLAGS -emit-hpx"
TBB_FIXER_FLAGS="$PLUGIN_FLAGS -emit-tbb"

FIXIT_FLAGS="-Xclang -fixit=opt"

# to compile the original file
COMPILE_COMMAND="$COMPILER $COMPILER_FLAGS $SOURCE -o bin_$SOURCE"
# to fix the file with openmp replacements
OMP_FIXIT_COMMAND="$FIXIT_COMPILER $OMP_FIXER_FLAGS $FIXIT_FLAGS -c $SOURCE "
# to fix the file with openacc replacements
ACC_FIXIT_COMMAND="$FIXIT_COMPILER $ACC_FIXER_FLAGS $FIXIT_FLAGS -c $SOURCE "
# to fix the file with cilk replacements
CILK_FIXIT_COMMAND="$FIXIT_COMPILER $CILK_FIXER_FLAGS $FIXIT_FLAGS -c $SOURCE "
# to fix the file with hpx replacements
HPX_FIXIT_COMMAND="$FIXIT_COMPILER $HPX_FIXER_FLAGS $FIXIT_FLAGS -c $SOURCE "
# to fix the file with tbb replacements
TBB_FIXIT_COMMAND="$FIXIT_COMPILER $TBB_FIXER_FLAGS $FIXIT_FLAGS -c $SOURCE "

# to compile the file generated by the openmp fixit command
OMP_COMPILE_FIXIT_COMMAND="$COMPILER $OMP_COMPILER_FLAGS $SOURCE_FIXIT_NAME -o bin_$SOURCE_FIXIT_NAME"
# to compile the file generated by the openacc fixit command
ACC_COMPILE_FIXIT_COMMAND="$COMPILER $ACC_COMPILER_FLAGS $SOURCE_FIXIT_NAME -o bin_$SOURCE_FIXIT_NAME"
# to compile the file generated by the cilk fixit command
CILK_COMPILE_FIXIT_COMMAND="$COMPILER $CILK_COMPILER_FLAGS $SOURCE_FIXIT_NAME -o bin_$SOURCE_FIXIT_NAME"
# to compile the file generated by the hpx fixit command
HPX_COMPILE_FIXIT_COMMAND="$COMPILER $SOURCE_FIXIT_NAME -o bin_$SOURCE_FIXIT_NAME $HPX_COMPILER_FLAGS "
# to compile the file generated by the tbb fixit command
TBB_COMPILE_FIXIT_COMMAND="$COMPILER $SOURCE_FIXIT_NAME -o bin_$SOURCE_FIXIT_NAME $TBB_COMPILER_FLAGS "


COMPILE_POLYCC_COMMAND="$COMPILER $COMPILER_FLAGS $POLYCC_RESULT -o bin_$POLYCC_RESULT"


