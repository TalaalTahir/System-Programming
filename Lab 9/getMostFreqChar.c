#include<stdio.h>
void main(int filec, char *filev[]){
  FILE *fpointer;
  char ch;
  char letters[30]="abcdefghijklmnopqrstuvwxyz";
  int count[30];
  int i;
  int max=0;
  int maxp=0;
  for(i=0;i<30;i++)
  count[i]=0;
  fpointer=fopen(filev[1],"r");
  while((ch=getc(fpointer))!=EOF){
    putchar(ch);
    for(i=0;letters[i]!='\0';i++){
      if(ch==letters[i] || ch==(letters[i]-32))
      count[i]++;
    }
  }
  fclose(fpointer);
  for(i=0;letters[i]!='\0';i++)
  if(max<count[i]){
    max=count[i];
    maxp=i;
  }
  printf("\nThe Most frequent letter is '%c'. It appeared %d times.\n",letters[maxp],max);
}