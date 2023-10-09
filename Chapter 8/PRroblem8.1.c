#include <stdio.h>
int main()
{int Num;
printf("Enter any number to get the factorial of\n");
scanf("%d", &Num);
int Fact = Factorial(Num);    
printf("Factorial = %d\n", Fact);
    return 0;}

int Factorial (int Num)
{
return Num*Num;
}