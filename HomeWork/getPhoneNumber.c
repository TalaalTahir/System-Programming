#include <stdio.h>
int main (void)
{
int i;
int j;
int x;
printf("Enter phone number [(999)999-9999]:");
scanf("(%3d)%3d-%4d", &i, &j, &x);
printf("You entered %3d-%3d-%4d\n", i, j, x);
return 0;
}
