#include <stdlib.h>
#include <stdio.h>
int main()
{
int Choice, Number, i ,Factorial  =1;

while(1)
{
printf(" Press 1 for Faxtorial\n Press 2 for Prime_NUmber\n Press 3 for Odd or Even\n Press 4 to Exit\n");
scanf("%d", &Choice);

switch (Choice)
{

case 1 : 
printf(" Enter the Number to obtain the Factorial\n");
scanf("%d", &Number);
for(i = 1; i<=Number; i++)
Factorial = Factorial*i;
printf("The Factorial of %d is %d\n", Number, Factorial);
                 break;

case 2 : 
printf(" Enter the Number to check if the the number is a Prime or not\n");
scanf("%d", &Number);
for(i = 2; i<=Number; i++)
 if(Number % i == 0)
     break;
if(Number == i)
printf("%d is a Prime Number\n", Number);
else 
printf("%d is not a Prime Number\n", Number);
        break;      

case 3 : 
printf(" Enter the Number to check if the nunber is odd or even\n");
scanf("%d", &Number);

Number % 2 == 0 ? printf("%d is an Even Number\n", Number) : printf("%d is an Odd Number\n", Number);
         break;         
         

case 4 : exit(EXIT_SUCCESS);
          break;

default :
 printf("Out of Choice\n");


}

}
    return 0;
    }
