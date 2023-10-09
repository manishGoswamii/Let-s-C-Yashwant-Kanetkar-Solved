#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char name[] = "Attack Titan";
    char *ptr;
    ptr = name;
    while(*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n\n");
    printf("%s", name);
    printf("\n%d\n", sizeof(name));
    return 0;
}