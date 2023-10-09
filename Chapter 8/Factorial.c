#include <stdio.h>
int main()
{int Num;
printf("Enter any number to get the factorial of\n");
scanf("%d", &Num);
int Fact = Factorial(Num);    
printf("Factorial = %d\n", Fact);
    return 0;}

int Factorial (int Num)
{int Fact =1;
for(int i = 1; i<= Num; i++)
Fact = Fact*i;
return Fact;
}