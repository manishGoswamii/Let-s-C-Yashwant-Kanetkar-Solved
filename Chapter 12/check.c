#include <stdio.h>

#define Work int a; \
int b;\
printf("Enter two numbers\n"); scanf("%d %d", &a, &b); printf("Addition = %d\n", a +b);  


int main()
{
    Work;
printf("Worked\n");
return 0;
}