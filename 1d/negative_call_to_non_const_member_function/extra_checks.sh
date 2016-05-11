#!/bin/bash

TEXTFILE=plugin_stderr.log

grep "the function called is not const and will change the state of the object" $TEXTFILE
