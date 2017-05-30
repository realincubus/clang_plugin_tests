#!/bin/bash -xe

TEXTFILE=plugin_out.log

grep "Dependency: from stmt 1 to stmt 1 type read after write:" $TEXTFILE
grep "Dependency: from stmt 0 to stmt 0 type write after write:" $TEXTFILE
