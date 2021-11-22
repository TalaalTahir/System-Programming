#!/bin/bash
# Talaal Tahir
# Ttahir1@studnet.gsu.edu

echo "Welcome to the Calcultor program!"
echo "--------------------------------"
awnser="yes"
prevSum=0
totalSum=0
prevTotal=0
while [ $awnser == "yes" ] || [ $awnser == "YES" ] || [ $awnser == "Yes" ]
do
echo "Please enter an expression or cancel to exit:"
echo "---------------------------------------------"
read expression

#Addition problems
if [[ $expression =~ [0-9]*\+[0-9]* ]]
then
currSum=$(echo $expression | awk -F+ '{print ($1+$2)}')
totalSum=`echo "scale=2; $currSum + $prevSum" | bc`
if [ $prevTotal == 0 ]
then
echo $expression "=" $totalSum
else
echo $prevTotal"+"$expression "=" $totalSum
fi

#Subtraction expressions
elif [[ $expression =~ [0-9]*-[0-9]* ]]
then
currSum=$(echo $expression | awk -F- '{print ($1-$2)}' )
totalSum=`echo "scale=2; $currSum + $prevSum" | bc`
if [ $prevTotal == 0 ]
then
echo $expression "=" $totalSum
else
echo $prevTotal"+"$expression "=" $totalSum
fi

#Multiplication expressions
elif [[ $expression =~ [0-9]*\*[0-9]* ]]
then
currSum=$(echo $expression | awk -F* '{print ($1*$2)}' )
totalSum=`echo "scale=2; $currSum + $prevSum" | bc`
if [ $prevTotal == 0 ]
then
echo $expression "=" $totalSum
else
echo $prevTotal"+"$expression "=" $totalSum
fi

#Division expressions
elif [[ $expression =~ [0-9]*/[0-9]* ]]
then
currSum=$(echo $expression | awk -F/ '{print ($1/$2)}' )
totalSum=`echo "scale=2; $currSum + $prevSum" | bc`
if [ $prevTotal == 0 ]
then
echo $expression "=" $totalSum
else
echo $prevTotal"+"$expression "=" $totalSum
fi

#Mod expressions
elif [[ $expression =~ [0-9]*%[0-9]* ]]
then
currSum=$(echo $expression | awk -F% '{print ($1%$2)}' )
totalSum=`echo "scale=2; $currSum + $prevSum" | bc`
if [ $prevTotal == 0 ]
then
echo $expression "=" $totalSum
else
echo $prevTotal"+"$expression "=" $totalSum
fi

#Clear the previous sum and total
elif [ $expression = "clear" ] || [ $expression == "CLEAR" ] || [ $expression == "Clear" ]
then
prevSum=0
prevTotal=0
echo "Previous sum has been cleared"

elif [ $expression = "cancel" ] || [ $expression == "CANCEL" ] || [ $expression == "Cancel" ]
then
echo "Calculator program has ended"
break
fi

#Check if user wants to continue
echo "Would you like to add to the previous sum: Type yes or no"
read awnser

#If user wants to continue set sums so they can continue to add to the total
if [ $awnser == "yes" ] || [ $awnser == "YES" ] || [ $awnser == "Yes" ]
then
prevSum=$totalSum
currSum=0
prevTotal=$totalSum

else
break

fi
done