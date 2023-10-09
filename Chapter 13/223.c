#include <stdio.h>
int main()
{
int arrray[5];
for(int i =0; i < 5; i++)
printf("The Address of array[%d] = %u\n", i, &arrray[i]);
    return 0;
}