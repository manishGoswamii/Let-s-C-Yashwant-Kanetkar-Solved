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

int Armstrong_Number(int Num)
{   int Temp;
    int Num_Hold = Num;
    int Product = 0;
    int Digits_In_The_Number = Number_Of_Digits(Num);
        
         while(Num_Hold !=0)
      {Temp = Num_Hold %10;
       Product = Product + pow(Temp, Digits_In_The_Number ); 
       Num_Hold = Num_Hold/10;  
      }
             if(Product == Num)
                return 1;
             else return 0;

}

int main()
{int Num;
printf("Enter a Number to check if it is an Armstrong Number or not\n");
scanf("%d", &Num);
int Check = Armstrong_Number(Num); 
Check ? printf("Yes\n") : printf("No\n");
    return 0;}