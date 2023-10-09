#include <stdio.h>
void Area_Peri(int, float *, float *);
int main()
{
int radius;
float area, perimeter;
printf("Enter the radius of the circle\n");
scanf("%d", &radius);

Area_Peri (radius, &area, &perimeter);

printf("The area of cicle = %f\n", area);
printf("The perimeter of cicle = %f\n", perimeter);

    
      return 0;}
void Area_Peri ( int Radius, float *Area, float *Perimeter)
{
*Area = 3.14*Radius*Radius;
*Perimeter = 2*3.14*Radius;

return ;
}