#include <stdio.h>
int main(void)
{
    int x =5, a = 4;
    int *y, *z;
    y = &x;
    z = &a;

    printf("%u\n", y-z);

    printf("%u\n", y);

    printf("%u\n", z);

    
    printf("%u\n", sizeof(y));

    
    printf("%u\n", y+2);



    return 0;
}