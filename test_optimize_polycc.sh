#!/bin/bash -xe


MY_PATH="`dirname \"$0\"`"              # relative
MY_PATH="`( cd \"$MY_PATH\" && pwd )`"

source $MY_PATH/program_paths.sh
source $MY_PATH/input.sh

BASEDIR=$1

cd $BASEDIR


echo "running clan autopragma"
clan -autopragma $SOURCE -o $SOURCE_CLAN 
echo "running polycc"
polycc --parallelize $SOURCE_CLAN -o $POLYCC_RESULT
echo "compiling polycc result"
$COMPILE_POLYCC_COMMAND
echo "running polycc result"
./bin_$POLYCC_RESULT
