#include <stdio.h>
#include <math.h>
void D_To_B(int);
int main(void)
{printf("Enter a binary to obtain the decimal equivalent\n");
int num;
scanf("%d", &num);
D_To_B (num);

    return 0;}
void D_To_B(int num)
{
    int sum = 0;
    int temp = 0;
    int hold = num;
while(num>0)
{
if(num%10==1)
sum = sum + pow(2,temp);

num = num/10;
temp++;
}
printf("The Decial equivalent of binary %d is %d\n", hold, sum);

}