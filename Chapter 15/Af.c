#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%d\t %d\t %d\t %d\t %d\n", sizeof('3'), sizeof("3"), sizeof(3), sizeof(char), sizeof('@'));
    return 0;
}