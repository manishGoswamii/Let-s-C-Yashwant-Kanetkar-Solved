#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int p[5] = {1,2,3,4,5};

int i , j;
int temp  =0;
    
    for(i= 0; i<5; i++)
    {
    temp = p[i+1];
    p[i+1]= p[i];

    }
    return 0;
}