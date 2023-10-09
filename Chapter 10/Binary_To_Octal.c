#include <stdio.h>
#include <math.h>
int B_To_D(int);
int D_To_O(int);
int Reverse(int);

int main(void)
{
printf("Enter a number in binary to obtain its octal equivalent\n ");
int num;
scanf("%d", &num);
int converted = B_To_D(num);
   
   printf("The octal euivalent of %d is %d\n", num, converted);
    return 0;
}

int B_To_D(int num)

{
int hold = num;
int temp =0;
int sum = 0;
      while(num>0)
{
 if(num%10==1)
sum = sum + pow(2, temp);
num = num /10;
temp++;
}
int converted = D_To_O(sum);

return converted;
}

int D_To_O(int num)
{
int temp; 
int sum = 0;
while(num>0)
{
temp = num%8;
sum = sum*10 + temp;
num = num/8;
}
int converted = Reverse(sum);
return converted;

}

int Reverse(int num)
{int temp; 
int sum = 0;
while(num >0)
{
temp = num%10;
sum = sum*10 + temp;
num = num/10;
}
return sum;
}

 