#include <stdio.h>

#define Add(x,y) x+y
#define Sub(x,y) x-y
#define Mult \
int num1, num2; \
printf("Enter two values to multiply\n"); \
scanf("%d %d", &num1, &num2);\
int num3 = num1*num2;\
printf("Multiply = %d\n", num3);

#define Div \
int num1, num2; \
printf("Enter two values to multiply\n"); \
scanf("%d %d", &num1, &num2);\
int num3 = num1/num2;\
printf("Multiply = %d\n", num3);

int main()
{
printf("%d", Add(2,4));
printf("%d", Sub(10, 5));
Mult;

int num1, num2;
scanf("%d %d", &num1, num2);
printf("%d\n", num1 +num2);


    return 0;
}