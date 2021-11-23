#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Function to check if the password for deductions
char* check(char* str){
	// initialize variables to keep track of count
	int count;
	// initialize pointer variables to check the difference, and the length of the string
	int diff=0, *d=&diff;
	int len=strlen(str), *p=&len;
	
	//check if the length of password is 10
	if(*p!=10){
		//Make the difference varaible the 10 minus the actual length of the password
		*d=10-len;
		//multply the difference by 5 because that is the amount per deduction
		count=5**d;
		
		//if the count for the deductions is greater than 30 print it and statment
		if(count>30){
			printf("The deductions are: %d points. The password is unsafe! Please Reset.\n", count);
			exit; //exit function after
			}
			//if the deduction is less than 30 password is safe
			else{
				printf("The password is safe.\n");
				}
			}
	//if the length is greater than 10 print this
	else{
		printf("The password is safe.\n");
		}
//return zero because nothing needs to be returned
return 0;
}

int main(){
	//initialize character array to store password
	char password[100];
	//Ask for password and save it in the character array
	printf("Enter Password: ");
	scanf("%s",password);
	//run check fucntion for password
	check(password);
	//return nothing
	return 0;
	}