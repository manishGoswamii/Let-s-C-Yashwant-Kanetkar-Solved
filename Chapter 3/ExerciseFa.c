#include <stdio.h>
int Reversed_Number (int Number)
{int Temp;
int Reversed = 0;
while(Number != 0)
{Temp = Number % 10;
Reversed = Reversed*10 + Temp;
Number = Number / 10;
 }
 return Reversed;
}

 int main()
 {int Number; 
 int Reversed;
printf("Enter the number to find the reverse of\n");
scanf("%d", &Number);
Reversed = Reversed_Number(Number);
printf("The Reversed Number of %d is %d\n", Number, Reversed);
if(Number == Reversed)
printf("The Reversed Number %d is equal to the original number %d\n", Reversed, Number);
else printf("Reversed Number %d and Original Number %d are not equal\n", Reversed, Number);

     return 0;}