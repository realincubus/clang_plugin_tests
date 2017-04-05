#!/bin/bash
# this should not be found in this case 
TEXTFILE=plugin_out.log

grep "this argument is passed to a variadic functions variadic part" $TEXTFILE
if [ $? -eq 0 ] ; then
  exit 1 
fi
exit 0 
