#include <stdio.h>
int main()
{float Distance_In_Kilometers;
float Distance_In_Meters;
float Distance_In_Feets;
float Distance_In_Inches;
float Distance_In_Centimeters;

printf("Enter the distance between two cities in kilometers\n");
scanf("%f", &Distance_In_Kilometers);

Distance_In_Meters = Distance_In_Kilometers * 1000;
Distance_In_Centimeters = Distance_In_Kilometers * 100000;
Distance_In_Inches = Distance_In_Centimeters / 2.54;
Distance_In_Feets = Distance_In_Inches/12;

printf("The Distance %f(in Kilometers) :\n", Distance_In_Kilometers);
printf(" Distance in Meters = %f\n Distance in Centimeters = %f\n Distance in Inches = %f\n Distance in feet = %f\n", Distance_In_Meters, Distance_In_Centimeters, Distance_In_Inches, Distance_In_Feets);

  return 0;}