#include <stdio.h>
#include <math.h>
int main()
{float Angle;
printf("Enter the Angle in Radian\n");
scanf("%f", &Angle);
printf("Sin %f = %f\n Cos %f = %f\n Tan %f = %f\n Sec %f = %f\n Cosec %f = %f\n Cot %f = %f\n",Angle, sin(Angle), Angle, cos(Angle), Angle, tan(Angle), Angle, 1/cos(Angle), Angle, 1/sin(Angle), Angle, 1/tan(Angle));
    return 0;}