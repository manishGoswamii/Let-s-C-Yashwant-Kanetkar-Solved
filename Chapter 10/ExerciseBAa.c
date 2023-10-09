#include <stdio.h>
void B_To_D (int);
int main()
{
printf("Enter a number to obtain the binary of that number\n");
int num;
scanf("%d", &num);
B_To_D(num);
    return 0;}

int temp; 
int Binary = 0;
int power = 1;

void B_To_D(int num)
{
if(num>0)
{
temp = num%2;
Binary = Binary + temp*power;
power = power*10;
num = num/2;
B_To_D(num);
}
else printf("%d\n", Binary);

}