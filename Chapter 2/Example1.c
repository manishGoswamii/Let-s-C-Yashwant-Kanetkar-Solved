#include <stdio.h>
#include <math.h>
int main()
{float Side1, Side2, Side3;
float Semi_Perimeter;
float Area_Of_Triangle;

printf("Enter the three sides of the triangle\n");
scanf("%f %f %f", &Side1, &Side2, &Side3);
 Semi_Perimeter = (Side1 + Side2 + Side3)/2;

Area_Of_Triangle = Semi_Perimeter*((Semi_Perimeter - Side1)*(Semi_Perimeter - Side2)*(Semi_Perimeter-Side3));
Area_Of_Triangle = sqrt(Area_Of_Triangle);

printf("The Area of Triangle with sides %f %f %f is %f\n", Side1, Side2, Side3, Area_Of_Triangle);
    
    return 0;}