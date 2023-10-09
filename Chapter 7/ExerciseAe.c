#include <stdio.h>
int main()
{int ch = 'a' + 'b';
switch(ch)
{
case 'a' :
case 'b': printf("You entered a\n");

case 'A' : printf("a as in ashar\n");

case 'b' + 'a' : printf("You entered a and b\n");


}
printf("Value = %d\n", 'a' + 'b');
    return  0;}