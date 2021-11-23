#include <stdio.h>
char* strcpy(char* strDest, const char* strSrc){
int i;
char len;

for(len=0; strSrc[len]!='\0'; ++len);
for(i=0; i<len; ++i){
strDest[i] = strSrc[i];
}
return strDest;
}

int main(){
char source[100];
char dest[100];
printf("Enter Source string: ");
scanf("%[^\n]", &source);
strcpy(dest,source);
printf("The destination string is: %s\n", dest);
return 0;
}