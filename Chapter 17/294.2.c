#include <stdio.h>
#include <string.h>
struct employee
{
char nameOfEmployee[30];
float salaryOfEmployee;
int ageOfEmployee;
};

int main(void)
{
struct employee e1 = {"Raj", 5500.50, 30};
struct employee e2, e3;   
struct employee e4;
 
 strcpy(e2.nameOfEmployee, e1.nameOfEmployee);

 e2.ageOfEmployee = e1.ageOfEmployee;

 e2.salaryOfEmployee = e1.salaryOfEmployee;

 e3 = e2;

strcpy(e4.nameOfEmployee, e1.nameOfEmployee);
e4.salaryOfEmployee = 14000;
e4.ageOfEmployee = 30;
 printf("E1: %s %f %d\n", e1.nameOfEmployee, e1.salaryOfEmployee, e1.ageOfEmployee);

 printf("E2 : %s %f %d\n", e2.nameOfEmployee, e2.salaryOfEmployee, e2.ageOfEmployee);

 printf("E3 : %s %f %d\n", e3.nameOfEmployee, e3.salaryOfEmployee, e3.ageOfEmployee);

 printf("E4 : %s %f %d\n", e4.nameOfEmployee, e4.salaryOfEmployee, e4.ageOfEmployee);


 return 0;

}