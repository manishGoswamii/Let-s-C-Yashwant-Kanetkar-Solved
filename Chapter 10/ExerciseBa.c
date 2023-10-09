#include <stdio.h>
#include <math.h>
void Binary (int);
int main(void)
{printf("Enter any number to obtain its binary equivalent\n");
int num;
scanf("%d", &num);
Binary(num);
return 0;}
void Binary(int num)
{
    int temp;
    long sum = 0;
    int pow = 1;
    while(num>0)
    {
    temp = num%2;
    sum = sum + temp*pow;
    num = num/2;
    pow = pow*10;

    }
    printf("%d\n", sum);

}