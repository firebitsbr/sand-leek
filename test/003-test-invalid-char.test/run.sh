#!/bin/sh

${EXECUTABLE} -s foovalid1not

if [ $? -eq 0 ]; then
	exit 1
else
	exit 0
fi