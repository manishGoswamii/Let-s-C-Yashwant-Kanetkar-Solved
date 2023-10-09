#include <stdio.h>
void Fun(int, int);

int main()
{int i = 5, j=2;
Fun(i,j);
printf("%d %d\n", i,j);
    return 0;}

void Fun(int i, int j)
{
i = i*i;
j =j*j;


}