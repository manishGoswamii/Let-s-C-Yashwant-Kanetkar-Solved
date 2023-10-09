#include <stdio.h>
#include <math.h>
int main()
{float Point1, Point2;
float R, Theta;

printf("Enter the Coordinate Points X and Y\n");
scanf("%f %f", &Point1, &Point2);

R = sqrt(Point1*Point1 + Point2*Point2);

Theta = atan(Point2/Point1);

printf("The Coordinate X = %f and Y = %f in Polar Coordinates are : X = %f and Y = %f\n", Point1, Point2, R, Theta);

    return 0;}