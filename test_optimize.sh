#!/bin/bash -xe

MY_PATH="`dirname \"$0\"`"              # relative
MY_PATH="`( cd \"$MY_PATH\" && pwd )`"

source $MY_PATH/program_paths.sh
source $MY_PATH/input.sh

BASEDIR=$1
EMIT_TYPE=$2

cd $BASEDIR

run_test() {
  RESULT_FOLDER=$1
  FIXIT_COMMAND=$2
  COMPILE_FIXIT_COMMAND=$3
  echo "compiling"
  $COMPILE_COMMAND 

  echo "overwriting fixit file"
  cp $SOURCE $SOURCE_FIXIT_NAME
  echo "applying fixits"
  rm plugin_stderr.log || true
  rm plugin_stdout.log || true
  $FIXIT_COMMAND 2> plugin_stderr.log 1> plugin_stdout.log
  echo "compiling fixed file"
  $COMPILE_FIXIT_COMMAND

  mkdir $RESULT_FOLDER/ || true

  echo moving to $RESULT_FOLDER folder
  mv $SOURCE_FIXIT_NAME $RESULT_FOLDER/
  mv bin_main.cpp	$RESULT_FOLDER/
  mv bin_main.opt.cpp   $RESULT_FOLDER/

  echo "comparing to reference file"
  cmp $RESULT_FOLDER/$SOURCE_FIXIT_NAME $RESULT_FOLDER/$SOURCE_REFERENCE

  cd $RESULT_FOLDER
  echo "executing original"
  ./bin_$SOURCE
  echo "excuting fixed"
  ./bin_$SOURCE_FIXIT_NAME
  cd ..

  if [ -e extra_checks.sh ]; 
  then
    echo "excuting additional checks"
    ./extra_checks.sh
  fi

  mv plugin_stderr.log $RESULT_FOLDER/
  mv plugin_stdout.log $RESULT_FOLDER/
}

case $EMIT_TYPE in
  openmp )
    run_test openmp "$OMP_FIXIT_COMMAND" "$OMP_COMPILE_FIXIT_COMMAND"
    ;;
  openacc )
    run_test openacc "$ACC_FIXIT_COMMAND" "$ACC_COMPILE_FIXIT_COMMAND"
    ;;
  cilk )
    run_test cilk "$CILK_FIXIT_COMMAND" "$CILK_COMPILE_FIXIT_COMMAND"
    ;;
  hpx )
    run_test hpx "$HPX_FIXIT_COMMAND" "$HPX_COMPILE_FIXIT_COMMAND"
    ;;
  tbb )
    run_test tbb "$TBB_FIXIT_COMMAND" "$TBB_COMPILE_FIXIT_COMMAND"
    ;;
esac
