#include <stdio.h>

#define ADD(x,y) printf("You just entered %d and %d\n", x,y); \
printf("Addition = %d\n", x+y); int k = x+y; \
printf("K =%d\n", k)

#define COM(x,y) (x>y? printf("X is greater\n"): printf("Y is greater %d\n",y))
int main()
{

    printf("Enter two numbers\n");
    int num, num2;
    scanf("%d %d", &num, &num2);
    ADD(num, num2);
    COM(num, num2);

    return 0;
}