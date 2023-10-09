#include <stdio.h>
int main()
{int Salary;
float DA, RA, Gross_Salary;
printf("Enter the salary of Ramesh \n");
scanf("%d", &Salary);

DA = Salary*0.4;
RA = Salary*0.2;
Gross_Salary = Salary + RA + DA;

printf(" The Gross Salary of Ramesh is %f\n On Basic Salary %d\n Dear Allowance %f\n Rent Allowance %f\n", Gross_Salary, Salary, DA, RA);

return 0;


 }