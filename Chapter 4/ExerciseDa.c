#include <math.h>
#include <stdio.h>

int main()
{float Number1, Number2, Number3;
printf("Enter the three sides of triangle\n");
scanf("%f %f %f", &Number1, &Number2, &Number3);

if (Number1 == Number2 && Number2 == Number3)
printf("The given tirangle is an Equilateral Triangle\n");

else if(Number1 != Number2 && Number2 != Number3 && Number1 != Number3)
printf("The Given Triangle is a Scalene Triangle\n");

else if(Number1 == Number2 || Number2 == Number3 || Number1 == Number3 )
printf("The given tirangle is an Isosceles Triangle\n");

float Greatest_Side;   
float Hypotenuse;

if(Number1>Number2)

{if(Number1>Number3)
{
Greatest_Side = Number1;
Hypotenuse =  sqrt(pow(Number2,2) + pow(Number3,2));
}
else
{Greatest_Side = Number3;
Hypotenuse =  sqrt(pow(Number2,2) + pow(Number1,2));
}
}

else

{if(Number2>Number3)
 {Greatest_Side = Number2;
 Hypotenuse =  sqrt(pow(Number1,2) + pow(Number3,2));

 }
  else 
 {Greatest_Side = Number3;
Hypotenuse =  sqrt(pow(Number2,2) + pow(Number1,2));

}
 }

Greatest_Side == Hypotenuse ? printf("The Given Triangle is a Right Angled Triangle\n") : printf("");

return 0;
}

    
    