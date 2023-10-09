#include <stdio.h>
int main()
{float Salary, DA, HRA;
printf("Enter the Salary of the person\n");
scanf("%d", &Salary);
if(Salary >= 1500)
{HRA = 500;
DA = Salary*98/100.0;}
else 
{HRA = Salary*10/100.0;
DA = Salary*90/100.0;}

Salary = Salary + DA + HRA;
printf("The Gross Salary of the person is %f\n", Salary);
    return 0;}