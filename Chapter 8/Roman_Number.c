#include <stdio.h>
int main()
{int Year;
printf("Enter the Centurey Year to obtain it in Roman\n");
scanf("%d", &Year);

while(Year > 0)
{
if(Year >= 1000)
{printf("M");
Year = Year - 1000;}

else if(Year>=900)
{printf("CM");
Year = Year-900;}

else if(Year >= 500)
{printf("D");
Year = Year - 500;
}

else if(Year>=400)
{printf("CD");
Year = Year - 400;}

else if(Year>=100)
{printf("C");
Year = Year - 100;}

else if(Year >= 90)
{printf("XC");
Year = Year - 90;}

else if(Year >= 50)
{printf("L");
Year = Year - 50;}

else if(Year >= 40)
{printf("XL");
Year = Year - 40;}

else if(Year >= 10)
{printf("X");
Year = Year - 10;}

else if(Year >= 9)
{printf("IX");
Year = Year- 9;}

else if(Year >= 5)
{printf("V");
Year = Year - 5;}

else if(Year >= 4)
{printf("IV");
Year = Year - 4;}

else if(Year >= 1)
{
printf("I");
Year = Year - 1;}

}


    return 0;}