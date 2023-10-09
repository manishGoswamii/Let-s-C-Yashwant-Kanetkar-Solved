#include <stdio.h>
int main()
{int Number;
char Another;
do{

printf("Enter a number to get the squre of \n");
scanf("%d", &Number);

printf("The Square of %d is %d\n", Number, Number*Number);

printf("Want to enter an another number\n");

fflush(stdin);

scanf(" %c", &Another);
}
while(Another == 'y' || Another == 'Y');
    
    return 0;}