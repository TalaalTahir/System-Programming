#!/bin/bash
# TTahir1@student.gsu.edu
# Find command in mandatabase.txt and print it

echo "Type command that you are looking for:"
read cmd

if [ $cmd == ls ] || [ $cmd == LS ] || [$cmd == Ls ]
then
sed -n '/LS(1)/,/LS(1)/p' mandatabase.txt

elif [ $cmd == cd ] || [$cmd == CD] || [ $cmd == Cd ]
then
sed -n '/CD(1)/,/CD(1)/p' mandatabase.txt

elif [ $cmd == grep ] || [ $cmd == GREP ] || [ $cmd == Grep ]
then
sed -n '/GREP(1)/,/GREP(1)/p' mandatabase.txt

elif [ $cmd == vi ] || [ $cmd == VI ] || [ $cmd == Vi ]
then
sed -n '/VI(1)/,/VI(1)/p' mandatabase.txt

elif [ $cmd == sed ] || [ $cmd == SED ] || [ $cmd == Sed ]
then
sed -n '/SED(1)/,/SED(1)/p' mandatabase.txt

elif [ $cmd == awk ] || [ $cmd == AWK ] || [ $cmd == Awk ]
then
sed -n '/AWK(1)/,/AWK(1)/p' mandatabase.txt

elif [ $cmd == sort ] || [ $cmd == SORT ] || [ $cmd == Sort ]
then
sed -n '/SORT(1)/,/SORT(1)/p' mandatabase.txt

elif [ $cmd == mkdir ] || [ $cmd == MKDIR ] || [ $cmd == Mkdir ]
then
sed -n '/MKDIR(1)/,/MKDIR(1)/p' mandatabase.txt

elif [ $cmd == wc ] || [ $cmd == WC ] || [ $cmd == Wc ]
then
sed -n '/WC(1)/,/WC(1)/p' mandatabase.txt

elif [ $cmd == cat ] || [ $cmd == CAT ] || [ $cmd == Cat ]
then
sed -n '/CAT(1)/,/CAT(1)/p' mandatabase.txt

else
echo "sorry, I cannot help you"

fi