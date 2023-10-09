#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n[3][3] = {2,4,3,6,8,5,3,5,1};
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t %d\n", n[i][j], *(*(n+i)+ j));
        }
    }
    return 0;
}