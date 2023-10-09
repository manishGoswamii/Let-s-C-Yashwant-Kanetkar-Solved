#include <stdio.h>
#define Area(x) (3.14*x*x)
#define Add(x,y) (x+y)
#define Work printf("You entered in the work\n"); \
printf("Second line of the work\n"); \
printf("Enter two values\n"); \
int q,r; \
scanf("%d %d", &q, &r); \
printf("addition of %d and %d is %d\n", q, r, q+r);

#define Loop \
int i;\
for(i = 1; i<=5; i++) \
printf("Lets count %d\n", i); \
int k, l; \
printf("Enter two values \n"); \
scanf("%d %d", &k, &l); \
 if(k==i || l == i) \
 printf("Same as the i\n"); \
 else printf("No values same\n") ;

#define Addition(Num1, Num2) \
printf("Enter two values\n");\
int Num3, Num4; \
scanf("%d %d", &Num3, &Num4);\
printf("%d %d\n", Num1 + Num3, Num2 + Num4);

#define Cal(x, i) x + i

int main()
{/*
float x;
printf("Enter radius\n");
scanf("%f", &x);
printf("%f",Area(x));

float y,z;
printf("\nEnter the two numbers\n");
scanf("%f %f", &y, &z);
printf("Addition of %f and %f is %f\n",y,z, Add(y,z));

Work ;
Loop;
*/
int Num1, Num2;
printf("Enter the two actual arguments\n");
scanf("%d %d", &Num1, &Num2);
Addition(Num1, Num2);

printf("%d", Cal(11,11));
    return 0;
}