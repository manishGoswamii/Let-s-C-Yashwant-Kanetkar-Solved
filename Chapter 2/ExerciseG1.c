#include <stdio.h>
int Sum_Of_The_Digits (int Num)
{int Addition = 0;
int Temp;
while(Num !=0)
{Temp = Num%10;
Addition = Addition + Temp;
Num = Num/10;
}
return Addition;}

int main()
{int Number;
printf("Enter the number\n");
scanf("%d", &Number);
int Addition = Sum_Of_The_Digits(Number);
printf("The Addition of the digits of %d is %d\n", Number, Addition);
    return 0;}