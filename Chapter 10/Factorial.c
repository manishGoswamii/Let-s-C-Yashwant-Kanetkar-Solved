#include <stdio.h>
int Factorial(int);
int main(void)
{
    printf("Enter any number to find its factprial\n");
    int Num;
    scanf("%d", &Num);
int Fact = Factorial(Num);
printf("The Factorial of %d is %d\n", Num, Fact);
    return 0;

}
int Factorial(int Num)
{


if(Num>1)
return Num*Factorial(Num-1);
else 
return Num;



}