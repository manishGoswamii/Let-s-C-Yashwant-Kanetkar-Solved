#include <stdio.h>
int main()
{
float Overtime_Pay;
int Hours_Worked;
int Number_Of_Employees = 1;
 while(Number_Of_Employees <=10)
 {
printf("Enter the hours employ worked\n");
scanf("%d", &Hours_Worked);

 if(Hours_Worked > 40)
{ Overtime_Pay =  (Hours_Worked - 40)*12;
printf("Overtime Pay for %d Overtime-Hours is %f\n\n",Hours_Worked-40 ,Overtime_Pay );}

else 
{Overtime_Pay = 0;
printf("No Overtime Pay\n\n");}

Number_Of_Employees++;}

 return 0;}
   