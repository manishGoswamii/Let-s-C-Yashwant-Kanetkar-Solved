#include <stdio.h>
int main()
{
    int num[] = { 24, 34,12,44,56,17};
    int i, *j;
    j = &num[0];
    for(i=0; i <=5; i++)
    {
        printf("The Address = %u\t Element = %d\n", j, *j);
        j++;
    }
    return 0;}