#include <stdio.h>
#define MEAN(x,y) ((x+y)/2)
int main()
{ double a, b;
    printf("Enter two numbers to find the arithmetic mean\n");
    scanf("%lf %lf",&a,&b);
    printf("The Arithmetic Mean of %lf and %lf is %lf\n", a,b, MEAN(a,b));
    return 0;
}