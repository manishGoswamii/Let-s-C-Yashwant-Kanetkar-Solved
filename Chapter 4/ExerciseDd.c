#include <stdio.h>
#include <math.h>

int main()
{float Mass, Height, BMI;
printf("Enter your Mass (in Kilograms)\n");
scanf("%f", &Mass);

printf("Enter your Height (in Meters)\n");
scanf("%f", &Height);

BMI = Mass/pow(Height, 2);
printf("BMI = %f\n", BMI);
if(BMI < 15)
printf("Starvation\n");

else if(BMI >= 15.1 && BMI <= 17.5)
printf("Anorexic\n");

else if(BMI >= 17.6 && BMI <= 18.5)
printf("Underweight\n");

else if(BMI >= 18.6 && BMI <= 24.9)
printf("Ideal\n");

else if(BMI >= 25 && BMI <= 25.9)
printf("Overweight\n");

else if(BMI >= 30 && BMI <= 30.9)
printf("Obese\n");

else if(BMI >= 40)
printf("Morbidly Obese\n");

return 0;}