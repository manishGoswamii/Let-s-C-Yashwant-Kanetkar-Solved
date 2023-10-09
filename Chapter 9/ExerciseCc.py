#include <math.h>
#include <stdio.h>
void Check(double Area, double New_Area);
double Cal_Area(float Side1, float Side2, float Side3);


void main(void)
{

    float X1, X2, X3, Y1, Y2, Y3;
    printf("Enter the values of X1, Y1\n");
    scanf("%f %f", &X1, &Y1);
    printf("Enter the values of X2, Y2\n");
    scanf("%f %f", &X2, &Y2);
    printf("Enter the values of X3, Y3\n");
    scanf("%f %f", &X3, &Y3);
    float Side1, Side2, Side3;

    Side1 = sqrt(pow(X2-X1,2) + pow(Y2-Y1,2));
    Side2 =  sqrt(pow(X3-X2,2) + pow(Y3-Y2,2));  
    Side3 = sqrt(pow(X1-X3,2) + pow(Y1-Y3,2));

printf("The Sides Obtained are : %f\t %f\t %f\n", Side1, Side2, Side3);

double Area = Cal_Area(Side1, Side2, Side3);
printf("The Area obtained by three sides is %f\n", Area);

float A, B, Side4, Side5, Side6;
printf("Enter the points(x,y) to check if they lie on the triangle or not\n");
scanf("%f %f", &A, &B);
Side4 = sqrt(pow(X1-A,2) + pow(Y1-B,2));
Side5 = sqrt(pow(X2-A,2) + pow(Y2-B,2));
Side6 = sqrt(pow(X3-A,2) + pow(Y3-B,2));

double Area1 = Cal_Area(Side4,Side5, Side1);
double Area2 = Cal_Area(Side2,Side5, Side6);
double Area3 = Cal_Area(Side6 ,Side3, Side4);
double New_Area = Area1  + Area2 + Area3;

Check(Area, New_Area);
 

}

double Cal_Area(float Side1, float Side2, float Side3)
{
    double S = (Side1 + Side2 + Side3)/2;
    double Area = sqrt(S*(S-Side1)*(S-Side2)*(S-Side3));
    return Area;

}

void Check(double Area, double New_Area)
{
    if(Area == New_Area)
    printf("Points lie inside\n");
    else printf("Points lie outside\n");
}
