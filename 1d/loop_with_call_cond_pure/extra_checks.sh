#!/bin/bash

TEXTFILE=plugin_stderr.log

grep "main.cpp:15:29: warning: Understood by Pet: .* function call is a call to a const/pure function" $TEXTFILE
