#!/bin/bash
time=$1

printf $(echo "$time*0.5/1" | bc)
