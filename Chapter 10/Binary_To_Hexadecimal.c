#include <stdio.h>
#include <math.h>
void B_To_D(int);
void D_To_H(int);
void Reverse(int);

int main(void)
{
printf("Enter a number in binary to obtain its octal equivalent\n ");
int num;
scanf("%d", &num);
 B_To_D(num);
   
    return 0;
}

void B_To_D(int num)

{
int temp =0;
int sum = 0;
      while(num>0)
{
 if(num%10==1)
sum = sum + pow(2, temp);
num = num /10;
temp++;
}
D_To_H(sum);

}

void D_To_H(int num)
{
char add = 0;
int temp; 
int sum = 0;
while(num>0)
{
temp = num%16;
if(temp<10)
{
sum = sum*10 + temp +48;
num = num/16;}
else if(temp > 9)
{
sum = sum + temp + 55;
num = num/16;
}
}

Reverse(sum);
return ;

}

void Reverse(int num)
{int temp; 
int sum = 0;
while(num >0)
{
temp = num%10;
sum = sum*10 + temp;
num = num/10;
printf("%c", temp);
}
return;
}

 













