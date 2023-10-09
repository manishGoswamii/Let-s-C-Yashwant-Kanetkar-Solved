#include <stdio.h>
int main()
{int Num1, Num2;
printf("Enter the base\n");
scanf("%d", &Num1);

printf("Enter the power\n");
scanf("%d", &Num2);

int i  =1;
int Power =1;
while(i<=Num2)
{Power = Power*Num1;
i++;}

printf("The power of %d raised to %d is %d\n", Num1, Num2, Power);

    return 0;}