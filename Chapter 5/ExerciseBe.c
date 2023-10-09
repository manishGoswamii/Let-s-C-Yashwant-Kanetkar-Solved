#include <math.h>
#include <stdio.h>
int main()
{
int Number;
printf("Enter a number to obtain its Octal\n");
scanf("%d", &Number);

int Hold_Num = Number;
int Reversed_Octal = 0;

int Flag = 0;
while(Hold_Num != 0)
{
Reversed_Octal = 10*Reversed_Octal + Hold_Num % 8;
if(Reversed_Octal == 0)
      Flag =1;
Hold_Num = Hold_Num / 8;
}

int Final_Octal = 0;

while(Reversed_Octal != 0)
{   
    Final_Octal = Final_Octal*10 +  Reversed_Octal % 10; 
    Reversed_Octal = Reversed_Octal/10;    
   
}
Flag == 1 ? Final_Octal = Final_Octal*10 : (Final_Octal = Final_Octal);


    printf("The Octal of %d is %d\n", Number, Final_Octal);

return 0;}
    