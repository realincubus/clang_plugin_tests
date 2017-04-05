#!/bin/bash

TEXTFILE=plugin_out.log

grep "the function called is not const and will change the state of the object" $TEXTFILE
