#include <stdio.h>
int main()
{char i;
printf("Enter the case\n");
scanf(" %c", &i);

switch(i)
{
case 'a' : printf("go\n");
case 'A':
 printf("I am 1\n");
printf("I am in 1\n");
printf("I am below in 1\n");
break;
case 'B'  :
case 'b' :
 printf("I am 2\n");
break ;
case 'C' :
case 'c':
 printf("I am 3\n");
break;
case 'd' :
case 'D':
 printf("I am 4\n");
break;
default : printf("I am nobody\n");


}
    return 0;}