#!/bin/bash

repeat=$1
string=$2
word=""

for ((i = 0; i < $repeat; i++))
do
  word="$word$string"
done

echo $word
