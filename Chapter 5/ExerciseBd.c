#include <stdio.h>
int main()
{int Num;
int Positive, Negative, Zero;
Positive = Negative = Zero = 0;
char Choice =1;
while(Choice)
{printf("Enter any number\n");
scanf("%d", &Num);

Num > 0 ? Positive++ : (Num <0 ? Negative++ : Zero ++);

printf("Do you want to continue?\n");
scanf(" %c", &Choice);
 if(Choice == 'N' || Choice == 'n')
 {printf(" Positive = %d\t Negative = %d\t Zeros = %d\n", Positive, Negative, Zero);
          break;}

 else {if(Choice == 'Y' || Choice == 'y')
         continue;
         else {printf("Out of Choice\n");
             printf(" Positive = %d\t Negative = %d\t Zeros = %d\n", Positive, Negative, Zero);
             break;}

 } 

}
    return 0;}