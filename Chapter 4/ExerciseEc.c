#include <stdio.h>
int main()
{float Num1, Num2, Num3, Greatest;

printf("Enter three numbers\n");
scanf("%f %f %f", &Num1, &Num2, &Num3);

Num1>Num2? (Num1> Num3 ? Greatest = Num1 :( Greatest = Num3)) : (Num2>Num3 ? Greatest = Num2 :( Greatest = Num3));
printf("The Greatest %f\n", Greatest);

    return 0;}