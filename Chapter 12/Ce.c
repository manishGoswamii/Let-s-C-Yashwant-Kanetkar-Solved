#include <stdio.h>
#include "interest.c"
int main()
{
    printf("Enter the principle amount\n");
    float p;
    scanf("%f", &p);
    printf("Enter the Rate\n");
    float r ;
    scanf("%f", &r);
    printf("Enter the time period\n");
    float t;
    scanf("%f", &t);
    float si = SI(p,r,t);
printf("The Simple Interest is %f\n", si);
printf("The total amount incurred %f \n", AMOUNT(si, p));

    return 0;
}