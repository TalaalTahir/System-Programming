#!/bin/bash
# Talaal Tahir
# Ttahir1@student.gsu.edu
# phonebook utility

awnser="yes"
while [ $awnser == "yes" ]
do
echo "Phone Book Utility"
echo "-----------------"
echo "1: Display Book"
echo "2: Add Person"
echo "3: Edit Person"
echo "4: Find Person"
echo "5: Delete Person"
echo "6: Exit"
echo " "
echo "Enter [1-6]"

read choice

if [ $choice == 1 ]
then
if [ -s phonebook.txt ]
then
echo "The phone book contains:"
sort +0 -2 phonebook.txt
else
echo "phonebook is empty"
fi

elif [ $choice == 2 ]
then
echo "Enter First,Last Name, Number, and address"
echo "First Name:"
read fname
echo "Last Name:"
read lname
echo "Number:"
read number
echo "Address:"
read address
echo "First Name: $fname , Last Name: $lname ,  Number: $number , Address: $address">>phonebook.txt
echo "New info added"

elif [ $choice == 3 ]
then
echo "Who would you like to edit?"
read who
if fgrep -q $who phonebook.txt;
then
fgrep $who phonebook.txt
echo "What would you like to edit"
read what
echo "What would you like to edit it to?"
read edit
sed -i "s/$what/$edit/" phonebook.txt
else
echo "Person not in phone book"
fi

elif [ $choice == 4 ]
then
echo "Who would you like to find?"
echo "Enter First Name:"
read ffind
echo "Enter Last Name:"
read lfind
fgrep $ffind phonebook.txt | fgrep $lfind

elif [ $choice == 5 ]
then
echo "Who would ou like to delete?"
echo "Enter First Name:"
read -r fdelete
sed -i "/$fdelete/d" phonebook.txt
echo "$fdelete has been removed."

elif [ $choice == 6 ]
then
echo "Phone Book program closed"
break
fi
done