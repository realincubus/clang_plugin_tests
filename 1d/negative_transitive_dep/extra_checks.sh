#!/bin/bash -xe

TEXTFILE=plugin_stderr.log

grep "Dependency: from stmt 1 to stmt 1 type RAW: prevents parallelization" $TEXTFILE
grep "Dependency: from stmt 0 to stmt 0 type WAW: prevents parallelization" $TEXTFILE
