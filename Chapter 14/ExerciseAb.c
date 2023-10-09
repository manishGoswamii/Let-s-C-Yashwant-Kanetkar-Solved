#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n[3][3] = {{2,4,3}, {6,8,5}, {3,5,1} };

    int i, *ptr;
    ptr = &n[0][0];
    for(i=0; i<9; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}