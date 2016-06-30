#!/bin/bash -xe

TEXTFILE=plugin_stderr.log

grep "Dependency: from stmt 0 to stmt 0 type RAW" $TEXTFILE
