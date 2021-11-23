#include <stdio.h>
#include <string.h>

//Functions to check if string is Palindrome
int check(char *str){
	//Initialize variables for the length
	int len=strlen(str);
	//Create pointers for the start and end of the string
	char *end, *start;
	//End would be the the string plus the end which would give null character so we subtract 1
	end=str+len-1;
	start=str;
	//While the end of the string holds a higher value than the beginning keep the loop going
	while(end>=start){
		//if the first value and the last value are the same keep iterating thorugh string
		if(*start==*end)
	{
		--end;
		++start;
		}
		//If the first and last value are the same it is not the palidrome so end while loop
		else{
			break;
		}
	}
	//If the start is greater than the end we have gone through the entire string so the string is palindrome
	if(start>end){
		printf("The message is a Palindrome.\n");
	}
	//If we break than the start isnt greater then the end so it isnt a palindrome
	else{
		printf("The message is not a Palindrome.\n");
	}
	return 0;
}

int main(){
	//initilize character array for messege and create a pointer array
	char msg[100], *ptr;
	printf("Enter Message: ");
	scanf("%s",msg);
	//The pointer should point at the first value in the message
	ptr = &msg[0];
	//Run check frunction to see if it is a palindrome
	check(ptr);
	return 0;
}