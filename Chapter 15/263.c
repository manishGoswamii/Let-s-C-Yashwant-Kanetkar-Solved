#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int xstrlen(char *);
int main(void)
{
    char arr[] = "King";
    int len1, len2;
    len1 = xstrlen(arr);
    len2 = xstrlen("Sword");

    printf("String = %s, Length =  %d\n", arr, len1);

    printf("String = %s, Lenght = %d\n", "Sword", len2);
    

    return 0;
}
int xstrlen(char *s)
{
    int length = 0; 
    while(*s != '\0')
    {
        length++;
        s++;
    }
    return length;
}
