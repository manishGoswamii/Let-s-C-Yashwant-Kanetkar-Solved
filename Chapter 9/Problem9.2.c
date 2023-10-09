#include <stdio.h>

void Percentage_Average (float*, float*);

int main(void)
{float Percentage, Average;
Percentage_Average ( &Percentage, &Average);
printf("Percentage = %f\n", Percentage);
printf("Average = %f\n", Average);
    return 0;
}

void Percentage_Average(float *Percentage, float *Average)
{
    int Sub1, Sub2, Sub3;
    printf("Enter the marks obtained in three subjects\n");
    scanf("%d %d %d", &Sub1, &Sub2, &Sub3);
    *Percentage = (Sub1 + Sub2 + Sub3)*1/3.0;
    *Average = (Sub1 + Sub2 + Sub3)/3.0;
    return;
}