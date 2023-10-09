#include <stdio.h>
void Prime_Number(int);

int main(void)
{int Number;
printf("Enter a number to obtain its Prime Factors\n");
scanf("%d", &Number);
Prime_Number(Number);
    return 0;
}

void Prime_Number(int Num)
{

while(Num > 0)
{
int i;
for(i =2; i<=Num; i++)
{   int j;
    for(j=2; j<=i; j++)
    {
        if(i%j==0)
        break;

 }

if(i==j)
{printf("%d\t", i);
Num = Num/i;}


}




}


}