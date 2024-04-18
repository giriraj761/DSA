#!/bin/bash
read -p "enter the terms of the series" term;
num=0;
for((i=1;i<term;i++))
do
  num=$(($num+$i))
  echo -ne $num $"\n"
done

