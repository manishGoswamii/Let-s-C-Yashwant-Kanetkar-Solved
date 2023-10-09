#include <stdio.h>
int main()
{int Number, Absolute;
    printf("Enter a number to find the  absolute value of that number\n");
scanf("%d", &Number);
if(Number < 0)
Absolute = Number*(-1);
else 
{if(Number > 0)
Absolute = Number;
else Absolute = 0;}

printf("The Absolute Value of %d\t is\t %d\n", Number, Absolute);

    return 0;}