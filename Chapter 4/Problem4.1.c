#include <stdio.h>
int main()
{int Year;
printf("Enter the year to check if it is a leap year or not\n");
scanf("%d", &Year);
if((Year % 400 == 0 || Year %100 != 0) && Year % 4==0)
printf("Leap Year\n");
else printf("Normal Year\n");
    return 0;}