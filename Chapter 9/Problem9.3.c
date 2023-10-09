#include <stdio.h>
#include <math.h>
float Factorial(double);
void Sin(float *, float *, float *);
int main()
{
    float x, n, Addition;
    printf("Enter x :\n");
    scanf("%f", &x);
    printf("Enter number of terms:\n");
    scanf("%f", &n);
    Sin(&x, &n, &Addition);
    printf("The Sum upto %f terms is %f\n",n, Addition);
    
    return 0;}

void Sin(float *A, float *B, float *C)
{
int i;
float j =3;
int k =2;
float Temp = *A;
for(i=1; i<=*B; i++)
{
{(k%2==0)? Temp = Temp - pow(*A, j)/Factorial(j) : (Temp = Temp + pow(*A, j)/Factorial(j));
j =+2;
k++;}
}
*C = Temp;

}

float Factorial(double x)
{
    float Fact = 1;
for(int i = 1; i<=x; i++)
Fact = Fact*i;
return Fact;
}