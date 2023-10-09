#include <stdio.h>
int main()
{int Year;
printf("Enter a year to check if it a Leap Year or Not\n");
scanf("%d", &Year);
(Year % 100 != 0 && Year % 4 ==0 ) ? printf("Leap Year\n") : (Year % 400 ==0 ? printf("Leap Year\n") : printf("Common Year\n"));

    
    return 0;}