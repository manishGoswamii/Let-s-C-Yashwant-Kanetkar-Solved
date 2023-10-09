#include <stdio.h>
void printit(float, char);

int main(void)
{float a = 15.5;
char ch = 'C';
printit(a,ch);
return 0;}

void printit(float a, char ch)
{printf("%f %c\n",a,ch);

}