#!/bin/bash

SOURCE="main.cpp"
SOURCE_FIXIT_NAME="$(basename --suffix=.cpp $SOURCE).opt.cpp"
SOURCE_CLAN="main.clan.cpp"
SOURCE_REFERNCE="main.reference.cpp"
POLYCC_RESULT="main.polycc.cpp"

COMPILER="g++"
COMPILER_FLAGS="-std=c++11 -fopenmp -O3"
FIXIT_COMPILER="clang++"
FIXIT_COMPILER_FLAGS="-std=c++11 -O0 -g -fsyntax-only"
#PLUGIN_PATH="/home/incubus/llvm_patch_test/build/lib/ClanPlugin.so"
PLUGIN_FLAGS="-Xclang -load -Xclang $PLUGIN_PATH -Xclang -add-plugin -Xclang clan -Xclang -plugin-arg-clan -Xclang -emit-openmp -Xclang -plugin-arg-clan -Xclang -write-cloog-file"
FIXIT_FLAGS="-Xclang -fixit=opt"

COMPILE_COMMAND="$COMPILER $COMPILER_FLAGS $SOURCE -o bin_$SOURCE"
FIXIT_COMMAND="$FIXIT_COMPILER $FIXIT_COMPILER_FLAGS $PLUGIN_FLAGS $FIXIT_FLAGS -c $SOURCE "
COMPILE_FIXIT_COMMAND="$COMPILER $COMPILER_FLAGS $SOURCE_FIXIT_NAME -o bin_$SOURCE_FIXIT_NAME"
COMPILE_POLYCC_COMMAND="$COMPILER $COMPILER_FLAGS $POLYCC_RESULT -o bin_$POLYCC_RESULT"


