#!/bin/bash

a=({A..Z})
for((i=1;i<5;i++))
do
	for((j=0;j<$i;j++))
	do
		echo -ne ${a[j]}
	done
echo
done
