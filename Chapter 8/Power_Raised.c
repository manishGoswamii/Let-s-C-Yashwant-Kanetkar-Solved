#include <stdio.h>
#include <math.h>
int Power(int, int);
int main()
{
int Num1,Num2;
printf("Enter the base to be raised\n");
scanf("%d", &Num1);
printf("Enter the power to which the base is to raised\n");
scanf("%d", &Num2);
int Power_Raised = Power(Num1, Num2);
printf("The basee %d raised to %d is %d\n", Num1, Num2, Power_Raised);
return 0;}

int Power(int Num1, int Num2)
{int j;
j = pow(Num1, Num2);
return j;

}