#include <stdio.h>
int main()
{float i;
for(int y = 1; y<=6; y++)
{for(float x = 5.5; x <= 12.5; x += 0.5)

{i = 2 + (y + 0.5*x);
printf(" Y = %d\t X = %f\t i = %f\n",y,x, i);

}}

    
    return 0;}