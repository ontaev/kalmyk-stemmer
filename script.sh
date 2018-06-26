#!/bin/bash
../snowball/snowball kalmyk.sbl -o xal/kalmyk_UTF_8 -ep kalmyk_UTF_8_ -utf8 
# ^^ You should specify path to snowball exec file. In this case it's: ../snowball/snowball
gcc -o kalmyk_UTF_8_prog xal/*.c
./kalmyk_UTF_8_prog input.txt -o output.txt

# For details please see: http://snowballstem.org/runtime/use.html
 
