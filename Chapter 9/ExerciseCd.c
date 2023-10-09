#include <stdio.h>
#include <math.h>
 void GCD (int, int, int *);
int main(void)
{
printf("Enter two numbers to find their GCD\n");
int Num1, Num2, *gcd;
scanf("%d %d", &Num1, &Num2);
 GCD(Num1, Num2, &gcd);
 printf("The GCD of %d and %d is %d\n", Num1, Num2, gcd);
    return 0;}

void GCD(int Num1, int Num2, int *gcd)
{
int greater, lesser;
Num1>Num2? greater = Num1 : (greater = Num2);

while(greater > 0)
{
if(Num1>Num2) 
{greater = Num1;
lesser = Num2;
}
else
{
 greater = Num2;
lesser = Num1;}

int sub = greater/lesser;
int new_term = greater - sub*lesser;
 
Num1 = Num2;
Num2 = new_term;
 if(new_term == 0)
 break;

printf("Greater = %d\t Lesser = %d\n ", Num1, Num2);

   }

      *gcd = lesser ;
}