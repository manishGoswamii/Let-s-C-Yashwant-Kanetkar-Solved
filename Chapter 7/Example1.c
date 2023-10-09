#include <stdio.h>
int main()
{int i;
printf("Enter the case\n");
scanf("%d", &i);

switch(i)
{
case 1 : printf("I am 1\n");
printf("I am in 1\n");
printf("I am below in 1\n");

case 2  : printf("I am 2\n");

case 3 : printf("I am 3\n");

case 4 : printf("I am 4\n");

default : printf("I am nobody\n");


}
    return 0;}