#include <stdio.h>
int Sum_Of_Digits(int);
int main()
{printf("Enter a number to obtain the sum of its digit\n");
int num;
scanf("%d", &num);
int Add = Sum_Of_Digits(num);
printf("Addition = %d\n", Add);
    return 0;}

int Sum_Of_Digits(int num)
{int Temp;
if(num >0)
Temp = num % 10 + Sum_Of_Digits(num/10);
else return 0;
}