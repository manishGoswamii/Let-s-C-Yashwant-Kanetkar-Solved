#include <stdio.h>
int main()
{
float a = 13.5;
float *b, *c;
b = &a;
c = b;
printf("%u\t%u\t%u\n", &a,b,c);
printf("%f\t%f\t%f\t%f\t%f\n", a, *(&a), *&a, *b, *c);
    return 0;
}