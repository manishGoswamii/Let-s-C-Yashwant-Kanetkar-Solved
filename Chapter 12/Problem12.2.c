#include <stdio.h>
#include "areaperi.c"
int  main()
{
    float height, base;
    
    printf("Enter Height of a triangle\n");
    scanf("%f", &height);
    printf("Enter the base of a triangle\n");
    scanf("%f", &base);
       printf("The Area of the triangle is %f\n",AREA_OF_TRIANGLE(height, base));

   float side1, side2, side3;
   printf("Enter the three sides of the triangle\n");
   scanf("%f %f %f", &side1, &side2, &side3);
       printf("The Perimeter of the triangle is %f\n", PERIMETER_OF_TRIANGLE(side1, side2, side3));

    float radius;
    printf("Enter the radius of a circle\n");
    scanf("%f", &radius);

    printf("The Area of the circle with radius %f is %f\n", radius, AREA_OF_CIRCLE(radius));
    printf("The Perimeter of the circle with radius %f is %f\n", radius, PERIMETER_OF_CIRCLE(radius));
     
    float side;
    printf("Enter a side of the square\n");
    scanf("%f", &side); 

    printf("The Area of the square with side %f is %f\n", side,AREA_OF_SQUARE(side));
    printf("Perimeter of the square with one of its side being %f is %f\n",side, PERIMETER_OF_SQUARE(side));
       return 0;
}