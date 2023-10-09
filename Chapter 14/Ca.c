#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int thread[3][2][3];
    printf("The First Element :\t %d\n", thread[0][0][0]);
    printf("The Last Element :\t %d\n", thread[2][1][2]);
    return 0;
}