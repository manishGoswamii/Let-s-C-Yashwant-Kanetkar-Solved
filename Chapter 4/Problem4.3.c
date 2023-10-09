#include <stdio.h>
int main()
{int Side1, Side2, Side3;
int Greatest_Side = 0;
int Sum_Of_Two_Sides = 0;

printf("Enter the three sides of tirangle\n");
scanf("%d %d %d", &Side1, &Side2, &Side3);
if(Side1>Side2)

{if(Side1>Side3)
{Greatest_Side = Side1;
Sum_Of_Two_Sides = Side2 + Side3;}
else
 {Greatest_Side = Side3;
 Sum_Of_Two_Sides = Side1 + Side2;}
}

else

{if(Side2>Side3)
 {Greatest_Side = Side2;
 Sum_Of_Two_Sides = Side1 + Side3;}
  else 
 {Greatest_Side = Side3;
Sum_Of_Two_Sides = Side1 + Side2;}
 }

 Sum_Of_Two_Sides > Greatest_Side  ?  printf("Valid Triangle\n"):printf("Not a Valid Triangle\n") ;
    
    
    return 0;}