#!/bin/bash

sqInRect() {
  length=$1
  width=$2
  square=0
  squares=""

  if [[ $length -eq $width ]]; then 
    echo "nil"
    return 
  fi
  
  while [[ $length -ne 0 && $width -ne 0 ]]
  do 
    square=$(($length-$width))

    if [[ $square -lt 0 ]]; then
      square=$(($square*-1))
      squares="${squares} ${length}"
      width=$square
    else
      squares="${squares} ${width}"
      length=$square
    fi    
  done
  echo $squares
}

sqInRect $1 $2
