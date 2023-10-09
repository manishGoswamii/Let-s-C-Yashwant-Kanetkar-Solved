#include <stdio.h>
void Prime_Factors (int);

int main(void)
{int Number;
printf("Enter a number to obtain its Prime Factors\n");
scanf("%d", &Number);
Prime_Factors(Number);
    return 0;
}

void Prime_Factors(int Num)
{int i  =2;
while(Num > 1)
{
if(Num%i==0)
{printf("%d\t", i);
Num = Num/i;
}
else i++;
}

return;}