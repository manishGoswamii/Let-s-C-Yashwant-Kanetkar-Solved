#include <stdio.h>
void Leap_Year(int);
int main(void)
{int Year;
printf("Enter a year to check if it is a Leap Year or not\n");
scanf("%d", &Year);
    Leap_Year(Year);
    return 0;
}

void Leap_Year(int Year)
{if(Year %100 == 0)
  {
      if(Year%400==0)
      printf("Leap Year\n");
      else printf("Not a Leap Year\n");
  }

  else
  {if(Year %4==0)
  printf("Leap Year\n");
  else printf("Not a Leap Year\n");}

    return;
}