#include <stdio.h>
int main()
{float Cost_Price, Selling_Price;
printf("Enter the Cost Price\n");
scanf("%f", &Cost_Price);
printf("Enter the Selling Price\n");
scanf("%f", &Selling_Price);

float Loss, Gain;

if(Cost_Price > Selling_Price)
{Loss = Cost_Price - Selling_Price;
printf("The Loss Incurred is %f\n", Loss);}

else {
if(Selling_Price > Cost_Price)
{Gain = Selling_Price - Cost_Price;
printf("The Gain Incurred is %f/\n", Gain);}

else 
{
printf("No Loss No Gain. %f = %f\n", Cost_Price, Selling_Price);}
}


    return 0;}