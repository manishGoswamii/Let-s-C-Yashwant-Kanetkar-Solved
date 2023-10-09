#include <stdio.h>
int main()
{
    int array[10];
    for(int i =0; i<=14; i++)
    {
     array[i] = i;
     printf("Value of Array[%d]\t = %d\n", i, array[i]);
    }
    printf("No Error\n");
    return 0;
}