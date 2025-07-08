#!/bin/bash

hours=$(($1*3600))
minutes=$(($2*60))
seconds=$3

echo $((($hours+$minutes+$seconds)*1000))
