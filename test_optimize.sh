#!/bin/bash -xe
#TODO extend this to generate all different kinds of parallel implementations

MY_PATH="`dirname \"$0\"`"              # relative
MY_PATH="`( cd \"$MY_PATH\" && pwd )`"

source $MY_PATH/program_paths.sh
source $MY_PATH/input.sh

BASEDIR=$1

cd $BASEDIR

echo "compiling"
$COMPILE_COMMAND 

echo "overwriting fixit file"
cp $SOURCE $SOURCE_FIXIT_NAME
echo "applying fixits"
$FIXIT_COMMAND 2> plugin_stderr.log 1> plugin_stdout.log
echo "compiling fixed file"
$COMPILE_FIXIT_COMMAND
echo "comparing to reference file"
cmp $SOURCE_FIXIT_NAME $SOURCE_REFERNCE

echo "executing original"
./bin_$SOURCE
echo "excuting fixed"
./bin_$SOURCE_FIXIT_NAME

if [ -e extra_checks.sh ]; 
then
  echo "excuting additional checks"
  ./extra_checks.sh
fi
