#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char source[] = " I might be a king ";
    char target[] = " Or I am none of a man ";
    char space[] = " K ";
    strcpy(target, source);
    printf("Source String =  %s\n", source);
    printf("Target String = %s\n", target);
    printf("Lenght of the Space = %d\n", strlen(space));
    return 0;
}