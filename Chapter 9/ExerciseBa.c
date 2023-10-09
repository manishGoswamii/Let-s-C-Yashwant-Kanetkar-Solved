#include <stdio.h>
void J(int *, int *);
int main()
{
    int p  =23;
    int f = 24;
    J(&p,&f);
    printf("%d %d\n", p, f);
    return 0;
}
void J(int *q, int *g)
{
    *q = *q+*q;
    *g = *g +*g;
}