#include <stdio.h>
int main()
{float Angle1, Angle2, Angle3;
    printf("Enter the three angles of a triangle\n");
scanf("%f %f %f", &Angle1, &Angle2, &Angle3);

if((Angle1 + Angle2 + Angle3 == 180 ) & Angle1 != Angle2 != Angle3 != 0 )
    printf("This is a valid triangle\n");
else 
printf("This is not a valid triangle\n");
    return 0;}