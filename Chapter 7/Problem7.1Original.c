#include <stdlib.h>
#include <stdio.h>
int main()
{
int Choice, Num, i, Fact;

while(1)
{

printf("\n1. Factorial\n");
printf("\n2. Prime\n");
printf("\n3. Odd/Even\n");
printf("\n4. Exit\n");
printf("\n Your Choice?\n");
scanf("%d", &Choice);

switch(Choice)
{
case 1 : 
printf("\nEnter number\n");
scanf("%d", &Num);
Fact = 1;
for(i =1; i<=Num; i++)
Fact = Fact*i;
printf("Factorial value of %d = %d\n", Num, Fact);
break;

case 2 :
printf("\nEnter number\n");
scanf("%d", &Num);
for(i=2; i<Num; i++)
{if(Num % i == 0)
{printf("Not a prime number\n");
break;}
}
if(Num == i)
printf("Prime Number\n");
break;

case 3 : 
printf("Enter number\n");
scanf("%d", &Num);
if(Num % 2 == 0)
printf("Even Number\n");
else 
printf("Odd Number\n");
break;

case 4 :
exit(0);

default : 
printf("Wrong Choice!\n");
}
} return 0;}