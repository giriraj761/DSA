#!/bin/bash
echo "the seies is: "
a=0
b=1

for ((i=0;i<10;i++))
do
	echo -n "$a "
	c=$(($a+$b))
	a=$b
	b=$c
done
echo
