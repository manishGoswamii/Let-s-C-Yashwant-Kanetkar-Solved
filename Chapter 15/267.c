#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char str1[] = "Jerry";
    char str2[] = "Ferry";
    int i, j,k,l;
    i = strcmp(str1, str2);
    j =strcmp(str2, str1);
    k = strcmp(str1, "Jerry Boy");
    l = strcmp(str1, "Jerry");
    printf("%d %d %d %d\n", i, j, k, l);
    return 0;
}