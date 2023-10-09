#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char source[] = " Folks! ";
    
    char target[]= " Hemllo ";
    printf("Target String before strcat function = %s\n", target);
    strcat(target, source);
    printf("SOurce String = %s\n", source);
    printf("Target String = %s\n", target);

    return 0;
}