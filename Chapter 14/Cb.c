#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j =25;
    int *pi; 
    int *pj = &j;
    *pj = j +5;
    return 0;
}