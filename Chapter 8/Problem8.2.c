#include <stdio.h>
int Power(int, int);
int main()
{
int Num1, Num2;
printf("Enter the base\n");
scanf("%d", &Num1);
printf("Enter the power upto which the base is to be raised\n");
scanf("%d", &Num2);
int Raised = Power(Num1, Num2);
printf("The base %d\t raised to power %d equals\t = %d\n", Num1, Num2, Raised);
    return 0;}
    

int Power(int Num1,int Num2)
{int j = Num1;
for(int i =2; i <= Num2; i++)
    j = j*Num1;
     return j; }