#!/bin/bash

max_rot () {
  arg1=$1
  maxnum=$1
  length=${#arg1}
  rotatei=0
  newrot=0
  
  # if the second symbol is 0
  if [[ ${maxnum:1:1} -eq 0 ]]; then
    echo $maxnum
    return $maxnum
  fi
  
  while [[ $rotatei -lt $(($length-1)) ]]; do
    newrot=""
    
    for ((i=0; i<$length; i++)); do
      if [[ $i -eq $rotatei ]]; then
        rotnum="${arg1:i:1}"
      else  
        newrot="${newrot}${arg1:i:1}"
      fi
    done

    newrot="${newrot}${rotnum}"
    rotatei=$((rotatei+1))
    
    if [[ $maxnum -lt $arg1 ]]; then
      maxnum=$arg1
    fi
    arg1="$newrot"
  done

  echo $maxnum
  return $maxnum
}

max_rot $1
