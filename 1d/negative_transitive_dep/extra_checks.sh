#!/bin/bash -xe

TEXTFILE=plugin_out.log

grep "Dependency: from stmt 1 to stmt 1 type RAW:" $TEXTFILE
grep "Dependency: from stmt 0 to stmt 0 type WAW:" $TEXTFILE
