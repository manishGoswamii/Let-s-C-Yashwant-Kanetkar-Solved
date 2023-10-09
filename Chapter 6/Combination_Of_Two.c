#include <stdio.h>
int main()
{int count = 0;

for(int i =1; i<=2; i++)
{for(int j =1; j<=2; j++)
{printf("%d %d\n", i,j);
count++;
}
}
printf("Count = %d\n", count);    
    return 0;}