#include <stdio.h>

#define GREATEST(x,y,z) (   x>y ? (x>z ? x : z)   : (  y>x? (y>z? y : z) : 0 ))

int main()
{   int a,b,c;
    printf("Enter three numbers to find out the greatest\n");
    scanf("%d %d %d", &a, &b,&c);
    printf("The greatest among %d %d %d is %d\n", a,b,c , GREATEST(a,b,c));
    return 0;
}