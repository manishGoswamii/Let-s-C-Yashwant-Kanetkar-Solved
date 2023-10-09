#include <stdio.h>
int main()
{int Year;
printf("Enter the year to check\n");
scanf("%d", &Year);
if(Year % 100 == 0)
{if(Year % 400==0)
   printf("%d is a Leap Year\n", Year);
else printf("%d is not a Leap Year\n", Year);
}
else {if(Year %4 == 0)
printf("%d is a Leap Year\n", Year);
else printf("%d is not a Leap Year\n", Year);
}

    return 0;}