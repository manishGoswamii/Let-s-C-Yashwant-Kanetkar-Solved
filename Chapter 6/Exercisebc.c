#include <stdio.h>
#include <math.h>
int main()
{float Years;
float Rate;
float Amount;
float Principle;
float Q;
int Set;

for(int i =1; i<=10; i++)
{printf("Enter the Set\n");
scanf("%d", &Set);
    printf("Enter the Compound Interest\n");
scanf("%f", &Q);

printf("Enter the Rate\n");
scanf("%f", &Rate);

printf("Enter the Years\n");
scanf("%f", &Years);

printf("Enter the Principle\n");
scanf("%f", &Principle);


    Amount = Principle * pow(( 1 + Rate/Q), Years*Q );

printf("Amount = %.2f\n", Amount);}


    return 0;}