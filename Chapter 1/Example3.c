#include <stdio.h>
int main()
{float Subject1, Subject2, Subject3, Subject4, Subject5;
float Aggregate_Marks, Percentage;

printf("Enter the marks obtained by student in different five subjects\n");
scanf("%f %f %f %f %f", &Subject1, &Subject2, &Subject3, &Subject4, &Subject5);

Aggregate_Marks = Subject1 + Subject2 + Subject3 + Subject4 + Subject5 ;

Percentage = Aggregate_Marks/5;

printf(" The total Aggregate Marks of Student are %f\n And Percentage = %f\n", Aggregate_Marks, Percentage);
    
    return 0;}