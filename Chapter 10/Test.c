#include <stdio.h>
void Test(void);
void main(void)
{ Test();
    }
void Test(void)
{
    int a ;
    printf("Enter\n");
    scanf("%d", &a);
    printf("%d\n", a);
    return;
}