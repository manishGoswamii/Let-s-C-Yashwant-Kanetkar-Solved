#include <stdio.h>
#include <math.h>
int main()
{
double Angle_In_Degrees;

printf("Enter the Angle in Degrees\n");
scanf("%f", &Angle_In_Degrees);

double Sin = sin(Angle_In_Degrees);
double Cos = cos(Angle_In_Degrees);
double Sum_Of_Squares = Sin*Sin + Cos*Cos;
double One = 1;
if( Sum_Of_Squares == One)

{printf("Yes\n");
printf(" Sin = %f\t Cos = %f\n Sum of Squares = %f\n ", Sin, Cos, Sum_Of_Squares);
}
else 

{printf("No\n");
printf(" Sin = %f\t Cos = %f\n Sum of Squares = %f\n ", Sin, Cos, Sum_Of_Squares);
}

    return 0;}