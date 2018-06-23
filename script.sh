#!/bin/bash
../snowball/snowball xal.sbl -o xal/xal -ep X_ -utf8 
gcc -o X_prog xal/*.c
./X_prog input.txt -o output.txt
 
