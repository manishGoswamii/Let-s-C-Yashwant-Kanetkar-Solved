#include <stdio.h>
int main()
{float Red, Green,Blue;
printf("Enter the value of Red\n");
scanf("%f", &Red);

printf("Enter the value of Green\n");
scanf("%f", &Green);

printf("Enter the value of Blue\n");
scanf("%f", &Blue);

float Max, White, Black, Cyan, Megenta, Yellow;

Red > Green ? ( Red > Blue ? Max = Red : (Max = Blue)) : (Green > Blue ? Max = Green : (Max = Blue)) ;   


if(Red == 0 && Green == 0 && Blue == 0)
{
Cyan = Megenta = Yellow = 0;

Black = 1;
}
else 
{
White = Max/255;

Cyan = (White - Red/255)/White;

Megenta = (White - Green/255)/White;



Yellow = (White - Blue/255)/White;

Black = 1-White;
}

printf(" The Values are :\n Red = %f\n Green = %f\n Blue = %f\n\n Cyan = %f\n Megenta = %f\n Yellow = %f\n K = %f\n", Red, Green, Blue, Cyan, Megenta, Yellow, Black);



    return 0;}