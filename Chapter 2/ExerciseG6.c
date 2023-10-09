#include <stdio.h>
int main()
{int Num1, Num2;
printf("Enter Two Numbers\n");
scanf("%d %d", &Num1, &Num2);
Num1 = Num1 + Num2;
Num2 = Num1 - Num2;
Num1 = Num1 - Num2;
printf(" Num1 = %d\n Num2 = %d\n", Num1, Num2);
    return 0;}