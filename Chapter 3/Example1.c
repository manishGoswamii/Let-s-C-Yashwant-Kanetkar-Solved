#include <stdio.h>
int main()
{float Amount, Discount, Quantity;
printf("Enter the Amount and Price per quantity\n");
scanf("%f %f", &Amount, &Quantity);

Amount = Amount*Quantity;

if(Amount > 1000)
Discount = 10;
else Discount = 0;

Amount = Amount - Amount*Discount/100.0;

printf("Total Expense = %f\n", Amount);

    return 0;}