#include <stdio.h>
int main()
{int Number;
printf("Enter any number to get the table of\n");
scanf("%d", &Number);

for(int i =1; i<=10; i++)
{printf("%d X %d = %d\n", Number, i, Number*i);}
    return 0;}