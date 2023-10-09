#include <stdio.h>
int Reverse_The_Number(int);
int main(void)
{printf("Enter a number to obtain the reverse of\n");
int Num;
scanf("%d", &Num);
int Reverse = Reverse_The_Number(Num);
printf("The Reverse of %d is %d\n", Num, Reverse);
    return 0;}
    int addition = 0;
    int temp;
int Reverse_The_Number(int Num)
{

if(Num>0)
{
temp = Num%10;
 addition =  addition*10 + temp ;
Num = Num/10;
  Reverse_The_Number(Num);
}
else return addition;

}