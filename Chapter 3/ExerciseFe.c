#include <stdio.h>
int main()
{float Length, Breadth;
float Perimeter, Area;
printf("Enter the Length of rectangle\n");
scanf("%f", &Length);
printf("Enter the Breadth of rectangle\n");
scanf("%f", &Breadth);

Perimeter = 2*(Length + Breadth);

Area = Length * Breadth;

if(Area > Perimeter)
{printf("The Area of rectangle having Length = %f\t and\t Breadth = %f\t is greater than the Perimeter\n", Length, Breadth);
printf("Area = %f\t and Perimeter = %f\n", Area, Perimeter);}

else 
{
printf("The Area of rectangle having Length = %f\t and\t Breadth = %f\t is\t is less than the Perimeter\n", Length, Breadth);
printf("Area = %f\t and Perimeter = %f\n", Area, Perimeter);
}
    return 0;}