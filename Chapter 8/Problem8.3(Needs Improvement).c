#include <stdio.h>
int Roman(int, int, char);
int main()
{int Year;
printf("Enter the Year\n");
scanf("%d", &Year);
Year  = Roman(Year, 1000, 'M');
Year  = Roman(Year, 500, 'D');
Year  = Roman(Year, 100, 'C');
Year  = Roman(Year, 50, 'L');
Year  = Roman(Year, 10, 'X');
Year  = Roman(Year, 5, 'V');
Year =  Roman(Year, 1, 'I');

    return 1;
    }
int Roman(int Year, int Digits, char ch)
{int i,j;
j = Year/Digits;
for(i =1; i<=j; i++)
printf("%c", ch);
return (Year - j);}
