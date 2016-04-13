#!/bin/bash 

#Êý×Ö×ª»»

no=100
echo "obase=2;$no" | bc
#1100100
no=11001000
echo "obase=10;ibase=2;$no" | bc
#200

echo "sqrt(100)" | bc

echo "10^10" | bc
