#include <stdio.h>
#include <math.h>
int main()
{ float Number;
printf("Enter the number to get all trigonometric functions of\n");
scanf("%f", &Number);
double Sin, Cos, Tan, Cot, Cosec, Sec;
printf(" Sin = %f\n Cos = %f\n Tan = %f\n Cot = %f\n Cosec = %f\n Sec = %f\n", sin(Number),cos(Number),tan(Number),1/tan(Number),1/sin(Number),1/cos(Number));
    
    return 0;}