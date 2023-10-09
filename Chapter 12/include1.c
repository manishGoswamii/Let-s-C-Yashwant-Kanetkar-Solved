#include <stdio.h>
#include "math.h"

#include "include2.c"
int main()
{
 Add();
   float x, y, z;
   printf("Two numbers\n");
   scanf("%f %f", &x, &y);
   z = x+y;
   printf("Sqrt = %f\n", sqrt(z)); 
    return 0;


}