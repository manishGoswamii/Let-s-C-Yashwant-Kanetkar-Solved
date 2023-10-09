#include <stdio.h>
#define Pointer(&a, &b) \
printf("Enter any value to be added\n"); \
int c ; \
scanf("%d", &c);\
*a = c; \
*b = *a + *b + c; \
printf("The value obtained %d %d %d", *a, *b, c);

int main()
{
    Pointer;
    return 0;
}