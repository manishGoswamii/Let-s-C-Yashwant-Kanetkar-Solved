#include <stdio.h>
int main()
{float Marks1, Marks2, Marks3, Marks4, Marks5, Total_Obtained, Percentage;
printf("Enter the marks obtained in five different subjects\n");
scanf("%f %f %f %f %f", &Marks1, &Marks2, &Marks3, &Marks4, &Marks5);
Total_Obtained = Marks1 + Marks2 + Marks3 +  Marks4 + Marks5;
Percentage = Total_Obtained/5;

if(Percentage >= 60)
printf("First Divison\n");

else if(Percentage >= 50 && Percentage <= 50)
printf("Second Division\n");

else if(Percentage >= 40 && Percentage <=49)
printf("Third Divison\n");

else if(Percentage<40)
printf("Failed\n");

printf("Total Marks = %f\t Percentage = %f\n", Total_Obtained, Percentage);
    return 0;}