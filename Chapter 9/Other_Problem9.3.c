#include <stdio.h>
#include <math.h>
float Factorial(float);
void Sin(float * ,float *);

int main()
{ 
   float x;
   float Addition;
    printf("Enter the number upto which you want the sun\n");
    scanf("%f", &x);
   Sin(&x, &Addition); 
   printf("The sum of sin series upto %f is %f\n", x, Addition);
    return 0;
}

void Sin(float *x, float *Addition)
{ 
float i;
int j = 2;
*Addition = *x;
for(i =3 ; i <= *x; i = i+2)
   { float fact = Factorial(i);
    if(j%2==0)
    *Addition =  *Addition - pow(*x, i)/fact;
   else 
    *Addition =  *Addition + pow(*x, i)/fact;
   
   j++;
   }
   return;
}

float Factorial (float Num )
{ float Fact = 1;
    for(int i = 2; i<=Num; i++)
      Fact = Fact*i;
     return Fact;
}