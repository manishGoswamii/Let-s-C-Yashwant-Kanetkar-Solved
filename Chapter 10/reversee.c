#include <stdio.h>
int Reverse (int);
int main()
{printf("Enter the number\n");
int num;
scanf("%d", &num);
int reverse = Reverse(num);
printf("The reversed of %d is %d\n", num, reverse);
    return 0;}

int Reverse(int num)
{
int reverse = 0;
    
while(num > 0)
{
    int temp = num%10;
    reverse = reverse*10 + temp;
    num = num/10;

}
return reverse;
}