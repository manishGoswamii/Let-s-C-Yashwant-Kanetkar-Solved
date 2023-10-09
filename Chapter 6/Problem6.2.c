#include <stdio.h>
int Factorial_Of_Number (int Number)
{int Factorial = 1;

for(int i = 1; i<= Number; i++)
{Factorial = Factorial*i;}

return Factorial;}

int main()
{
int i,j;
float Number1, Number2;
float Addition = 0;
float Factorial;
   
printf("Enter the first number of the range\n");
scanf("%f", &Number1);
printf("Enter the second number of the range\n");
scanf("%f", &Number2);
   
    for(i = Number1; i<= Number2; i++)
        { Factorial = Factorial_Of_Number(i);
             Addition = Addition +  i/Factorial;    }
        
        printf("Addition = %f\n", Addition);
        
        return 0;}