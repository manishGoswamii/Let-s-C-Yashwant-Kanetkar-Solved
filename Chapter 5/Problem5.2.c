#include <stdio.h>
int main()
{int Number;
int Factorial =1;
printf("Enter a positive integer\n");
scanf("%d", &Number);
int i =1 ;
//1
while(i<=Number )
{Factorial= Factorial*i;
i++;}
printf("The factorial of %d is %d\n", Number, Factorial);
return 0;}

//2
/*
for(int i = 1; i <= Number; i++)
{Factorial = Factorial*i; }
printf("The factorial of number %d is %d\n", Number, Factorial);
    return 0;}
    */