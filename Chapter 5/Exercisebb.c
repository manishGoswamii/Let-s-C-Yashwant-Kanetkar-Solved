#include <math.h>
#include <stdio.h>
int Number_Of_Digits (int Num)
{int count = 0;
    while(Num != 0)
      {count++;
    Num = Num/10;
                }
return count; 
}

int Armstrong_Number(int Num1, int Num2)
{   
    for(int i = Num1; i<=Num2;i++)
   { 
    int Temp;
    int Num_Hold = i;
    int Product = 0;
    int Digits_In_The_Number = Number_Of_Digits(i);
        
         while(Num_Hold !=0)
      {Temp = Num_Hold %10;
       Product = Product + pow(Temp, Digits_In_The_Number ); 
       Num_Hold = Num_Hold/10;  
      }
             if(Product == i)
                printf("%d is Armstrong Number\n", i);}
                
}

int main()
{int Num1, Num2;
printf("Enter first number of range\n");
scanf("%d", &Num1);
printf("Enter last number of range\n");
scanf("%d", &Num2);
Armstrong_Number(Num1, Num2); 
    return 0;}