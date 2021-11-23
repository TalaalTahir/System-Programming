#!/bin/bash
# Talaal Tahir
# Ttahir1@student.gsu.edu
# Serach through myexamfile.txt to find number of statements

echo "Number of Statements in myexamfile.txt is:"

sed 's/\../\n/g' myexamfile.txt > temp.txt
cat temp.txt | wc -l

echo "Number of words and characters in each Statements is:"
echo "---------------------"
while read line
do
echo "$line" | wc -w -c
echo "---------------------"
done < temp.txt