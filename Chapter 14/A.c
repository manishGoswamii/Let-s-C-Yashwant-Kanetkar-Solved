#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n[3][3] = {{2,4,3}, {6,8,5}, {3,5,1} };
    
    printf("%d\t %d\t %d\t", *n, n[1][1], n[2][2]);

    return 0;
}