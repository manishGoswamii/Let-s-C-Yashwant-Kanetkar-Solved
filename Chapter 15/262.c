#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char arr[] = "King";
    int len1, len2;
    len1 = strlen(arr);
    len2 = strlen("Sword");

    printf("String = %s Lenght = %d\n", arr, len1);
    
    printf("String = %s Lenght = %d\n", "Sword", len2);

    
    return 0;
}