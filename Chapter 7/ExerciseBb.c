#include <stdio.h>
int main()
{int a = 3, b =4, c;
c = b-a;
switch(c)
{case 1 || 2 : printf("No Error\n");

case 5 || 3 : printf("No error for sure\n");

case 2 || 9 : printf("Wow! No Error\n");

default : printf("Braah!\n");

}

    return 0;}