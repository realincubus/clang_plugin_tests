#!/bin/bash -xe

TEXTFILE=plugin_out.log

grep "Dependency: from stmt 0 to stmt 0 type write after read" $TEXTFILE
