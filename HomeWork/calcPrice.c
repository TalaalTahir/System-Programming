#include <stdio.h>
int main (void)
{
int itemNumber;
float unitPrice;
int quantity;
int date;
int month;
int year;
float total;

printf("Enter item number:");
scanf("%d", &itemNumber);

printf("Enter unit price:");
scanf("%f", &unitPrice);

printf("Enter quantity:");
scanf("%d", &quantity);

printf("Enter purchase date (mm/dd/yyyy):");
scanf("%2d/%2d/%4d", &date, &month, &year);

total=unitPrice*quantity;

printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");

printf("%-d\t$%9.2f\t%-d\t%2d/%2d/%4d\t$%11.2f\n", itemNumber, unitPrice, quantity, date, month, year, total);


return 0;
}