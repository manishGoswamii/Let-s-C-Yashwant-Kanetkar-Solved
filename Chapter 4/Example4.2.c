#include <stdio.h>
int main ()
{char Marital_Status;
int Age;
char Gender;
printf("Enter your Marital Status\n");
scanf(" %c", &Marital_Status);

if(Marital_Status == 'M' || Marital_Status == 'm')

printf("You can get the insurance\n");

else  
{
printf("Enter your Gender\n");
scanf(" %c", &Gender);
printf("Enter your age\n");
scanf("%d", &Age);

if((Gender == 'm' || Gender == 'M') && Age > 30)
printf("You can get the insurance\n");

else {

    if((Gender == 'F' || Gender == 'f') && Age > 25)
    printf("You can get the insurance\n");

    else printf("Cannot get insurance\n");
}


}
    return 0;}