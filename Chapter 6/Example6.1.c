#include <stdio.h>
int main()
{int Number;
printf("Enter a number to check if it is a prime number or not\n");
scanf("%d", &Number);
int i;
for(i = 2; i<=Number ; i++)
{if(Number % i == 0)
    break;
}
if(i== Number)
printf("%d is a Prime Number\n", Number);

else printf("Not a Prime Number %d\n", Number);

    return 0;}