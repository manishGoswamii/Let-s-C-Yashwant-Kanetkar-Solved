#include <stdio.h>
void Prime_Factors(int, int);
int main()
{printf("Enter a number to find the prime factors of that number\n");
int Number;
scanf("%d", &Number);
Prime_Factors(Number, 2);
    return 0;}
void Prime_Factors(int num, int div)
{
    if(num>0)
    {
        if(num%div==0)
        {
        printf("%d\t", div);
        num = num/div;
        Prime_Factors(num, div);
        }
        else {
        div++;
        Prime_Factors(num, div);}


     }

    else return ;
}
