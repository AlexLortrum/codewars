#!/bin/bash

if [[ $1 -gt $2 ]]
then
  start=$2
  end=$1
else
  start=$1
  end=$2
fi

counter=0
while [[ $start -le $end ]]
do
  counter=$(($counter+$start))
  start=$(($start+1))
done

echo $counter
