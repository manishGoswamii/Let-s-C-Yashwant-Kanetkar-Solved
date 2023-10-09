#include <stdio.h>
int main()
{
int Num1, Num2;

printf("Enter the first number of the range\n");
scanf("%d", &Num1);
printf("Enter the last number of the range\n");
scanf("%d", &Num2);

printf("\n\n");

int count = 0;
int i;
int j ;
for(i = Num1; i<= Num2; i++)
{
for(j=2; j <= i; j++)
{     if(i%j==0)
       break;              }

      if(i==j)
   {printf("%d is a Prime Number\n", i);
     count++;}
     }

printf("Count = %d\n", count);
   
    return 0;}