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
  NEGATIVE_TEST=0
  GTEST_TEST=0
  COMMENT_TEST=0

  FOLDER_NAME=$(basename $PWD)
  if echo $FOLDER_NAME | grep "negative_" ; then
    NEGATIVE_TEST=1
  fi

  if echo $FOLDER_NAME | grep "comment" ; then
    COMMENT_TEST=1
  fi

  if echo $FOLDER_NAME | grep "gtest_" ; then
    GTEST_TEST=1
  fi

  echo "compiling"
  if [ $GTEST_TEST ] ; then
	$COMPILE_COMMAND -l gtest -l gtest_main
  else
  	$COMPILE_COMMAND 
  fi

  echo "overwriting fixit file"
  cp $SOURCE $SOURCE_FIXIT_NAME
  echo "applying fixits"
  rm plugin_out.log || true

  if [ $COMMENT_TEST -eq 1 ] ; then
    FIXIT_COMMAND="$FIXIT_COMMAND -Xclang -plugin-arg-clan -Xclang -keep-comments"
    echo "KEEPING COMMENTS"
  fi

  $FIXIT_COMMAND &> plugin_out.log

  echo "compiling fixed file"
  if [ $GTEST_TEST ] ; then
  	$COMPILE_FIXIT_COMMAND -l gtest -l gtest_main
  else
  	$COMPILE_FIXIT_COMMAND
  fi
  

  mkdir $RESULT_FOLDER/ || true

  echo moving to $RESULT_FOLDER folder
  mv $SOURCE_FIXIT_NAME $RESULT_FOLDER/
  mv bin_main.cpp	$RESULT_FOLDER/
  mv bin_main.opt.cpp   $RESULT_FOLDER/

  if [ $NEGATIVE_TEST -eq 0 ] ; then
    echo "comparing to reference file"
    cmp $RESULT_FOLDER/$SOURCE_FIXIT_NAME $RESULT_FOLDER/$SOURCE_REFERENCE
  else
    echo "comparing to original file"
    cmp $RESULT_FOLDER/$SOURCE_FIXIT_NAME $SOURCE
  fi

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

  mv plugin_out.log $RESULT_FOLDER/
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
