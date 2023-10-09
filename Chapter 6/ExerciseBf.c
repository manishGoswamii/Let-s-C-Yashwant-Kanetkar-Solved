#include <stdio.h>
int main()
{float Population = 100000;
float Previous;

for(int i =1; i <=10; i++)
{
Previous = Population*0.1;
Population = Population - Previous; 
 printf("Population at the end of %d year = %f\n", i, Population);
}
    return 0;}