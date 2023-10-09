#include <stdio.h>
#include <math.h>

void Sum_Average_Deviation (int *,float *,float *);
int  main(void)
{int Sum;
float Average, Deviation;

Sum_Average_Deviation(&Sum, &Average, &Deviation);
    
printf("The sum of five numbers is %d\n", Sum);
printf("The Average of five numbers is %f\n", Average);
printf("The Deviation of five numbers is %f\n", Deviation);
    return 0;
}
void Sum_Average_Deviation( int *Addition, float *Average, float *Deviation )
{

int Num1, Num2, Num3, Num4, Num5;
printf("Enter five numbers\n");
scanf("%d%d%d%d%d", &Num1, &Num2, &Num3, &Num4, &Num5);

*Addition = Num1 + Num2 + Num3 + Num4 + Num5;
*Average =   (Num1 + Num2 + Num3 + Num4 + Num5)/5;
Num1 = pow(Num1 - *Average,2);
Num2 = pow(Num2 - *Average,2);
Num3 = pow(Num3 - *Average,2);
Num4 = pow(Num4 - *Average, 2);
Num5 = pow(Num5 - *Average,2);

float SD = Num1 + Num2 + Num3 + Num4 + Num5;

*Deviation = sqrt(SD/4);
    

    return;
}