#include <stdio.h>
int main()
{float Salary; 
printf("Enter the salary\n");
scanf("%f", &Salary);
Salary >=25000 && Salary <=40000 ? printf("Manager\n") : (Salary >=15000 && Salary <=25000 ? printf("Accountant\n") : printf("Clerk"));
    
    return 0;}