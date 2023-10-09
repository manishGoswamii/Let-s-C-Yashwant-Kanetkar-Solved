#include <stdio.h>
#include <math.h>
int main()
{
float Number;
printf("Enter a number to get the Natural Logarithm of\n");
scanf("%f", &Number);

int Range;
printf("Enter a number to get the sum of the series of Natrual Logarithm upto that number\n");
scanf("%d", &Range);

float log = (Number - 1)/Number;
float Addition_Of_Series = 0;

for(int i =2; i<= Range; i++)
{ 
Addition_Of_Series = Addition_Of_Series + 0.5*pow(log, i);
}

Addition_Of_Series = Addition_Of_Series + log;

printf("Addition of Logarithm Series of Number %f\t upto \t%d\t is = %.5f\n\n", Number, Range, Addition_Of_Series);
    return 0;
    }