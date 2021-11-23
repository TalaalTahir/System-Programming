#include <stdio.h>
#include <string.h>
//Function to check if the password for deductions
char* check(char* str){
	//Initialize pointer varaibls for the deduction count and the length of the password
	int count=0, *c=&count;
	int diff=0, *d=&diff;
	int len=strlen(str), *p=&len;
	//Initialize flag variables to check password
	int upperFlag=0,lowerFlag=0,numFlag=0,conFlag=0,i,j;
	
	//Check if the length if 10 or less
	if(*p!=10){
		*d=10-len;
		*c=5**d;
		}
	
	//Check if there are Uppercases
	//Iterate through the character array
	for(i=0;i<*p;++i){
		//if the array has the ASCII values for uppercase increment flag by 1
		if (str[i] >= 65 && str[i] <= 90){
			upperFlag=upperFlag+1;
		}
	}
	
	//Check if there are Lowercases
	//Iterate through the character array
	for(i=0;i<*p;++i){
		//if the array Has the ASCII values for lowercase increment flag by 1
		if (str[i] >= 97 && str[i] <= 122){
			lowerFlag=lowerFlag+1;
		}
	}
	
	//Check if there are numbers in the password
	//Iterate through the character array
	for(i=0;i<*p;++i){
		//If the array contains a number increment flag by 1
		if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'){
			numFlag=numFlag+1;
		}
	}
	
	//Check if there are consecutive characters
	//Iterate through array twice
	for(i=0;i<*p;++i){
		for(j=1;j<*p;++j){
			//If the character minus the previous 1 is equal to 1 this means the ASCII values are consecuive, increment flag by 1
			if(str[j]-str[i]==1){
				conFlag=conFlag+1;
			}
		}
	}
	
	//If the Consecutive flag is 2 or more, there are 2 consecutive values, deduct 20 points
	if(conFlag>=2){
		*c=*c+20;
	}
	
	//If the upper flag is zero,there are no Uppercase letters, deduct 20 points
	if(upperFlag==0){
		*c=*c+20;
	}
	
	//If the lower flag is zero, there are no Lowercase letters, deduct 20 points
	if(lowerFlag==0){
		*c=*c+20;
	}
	
	//If the num flag is zero, there are no numbers, deduct 20 points
	if(numFlag==0){
		*c=*c+20;
	}
	
	//If the deduction count is greater than 30, password is unsafe
	if(*c >= 30){
		//Print deductions and statement
		printf("The deductions are: %d points. The password is unsafe! Please Reset.\n", count);
	}
	
	//If the deduction count is less than 30, password is safe
	else{
		printf("The password is safe.\n");
	}
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