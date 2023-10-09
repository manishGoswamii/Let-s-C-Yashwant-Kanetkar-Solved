#include <stdio.h>
#include <math.h>
void Area_Of_Triangle(float, float, float, float*);

int main(void)
{float Side1, Side2, Side3, Area; 

printf("Enter the three sides of the triangle\n");

scanf("%f %f %f", &Side1, &Side2,&Side3);

Area_Of_Triangle(Side1, Side2, Side3, &Area);

printf("The Area of triangle = %f\n", Area);
    return 0;
}

void Area_Of_Triangle(float Side1, float Side2, float Side3, float *Area)
{
float S = (Side1 + Side2 + Side3)/2.0;
*Area = sqrt(S*(S-Side1)*(S-Side2)*(S-Side3)); 
    return;
}