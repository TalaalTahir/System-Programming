#include <stdio.h>
#include <string.h>

int main(){
	char smallest_word[21]="";
	char largest_word[21]="";
	char word[21];
	printf("Enter word: ");
	scanf("%s",word);
	
	strcpy(smallest_word,word);
	while(strlen(word)!=4){
		if(strcmp(word,largest_word)>0){
			strcpy(largest_word,word);
			}
		if(strcmp(word,smallest_word)<0){
			strcpy(smallest_word,word);
			}
		printf("Enter word: ");
		scanf("%s",word);
	}
	printf("Smallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);
	return 0;
	}