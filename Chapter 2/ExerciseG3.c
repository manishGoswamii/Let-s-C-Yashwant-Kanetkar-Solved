#include <stdio.h>
#include <math.h>
int main()
{float Angle1, Angle2, Angle3, Angle4;
const float PI = 3.14;
printf("Enter the Latitude Points\n");
scanf("%f %f", &Angle1, &Angle2);
printf("Enter the Longitude Points\n");
scanf("%f %f", &Angle3, &Angle4);
Angle1 = 180/PI*Angle1;
Angle2 = 180/PI*Angle2;
Angle3 = 180/PI*Angle3;
Angle4 = 180/PI*Angle4;

float Distance = 3963 * acos(sin(Angle1)*sin(Angle2) + cos(Angle1)*cos(Angle2)*cos(Angle4-Angle3));
printf("The distance is %f nautical miles\n", Distance);

    
    
    return 0;}