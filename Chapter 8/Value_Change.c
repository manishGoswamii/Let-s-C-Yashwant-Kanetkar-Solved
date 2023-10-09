#include <stdio.h>
int Fun(int);
int main()
{int a = 30;
Fun(a);
printf("A = %d\n", a);
return 0;
}

int Fun(int a)
{a = 20;
printf("Fun A = %d\n", a);
return a;}