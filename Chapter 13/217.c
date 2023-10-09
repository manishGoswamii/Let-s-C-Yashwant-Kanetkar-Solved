#include <stdio.h>
int main()
{
float marks[30];
float sum = 0.0;
float average;
for (int i  = 0; i<=9; i++ )
{   printf("Enter marks\n");
    scanf("%f", &marks[i]);
    sum = sum + marks[i];
}
average = sum/10;
printf("The average of marks obtained by 30 students is %f\n", average);
    return 0;
}