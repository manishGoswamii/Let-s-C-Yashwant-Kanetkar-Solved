#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name[] = " Randy Ortan ";
    char title[] = " The Viper";
    char surname[] = "The CHutiya";
    printf("The Lenght of the string = %d\n", strlen(name));
    printf("Lower Case of string = %s\n", strlwr(name));
    printf("The Upper Case of string = %s\n", strupr(name));
    printf("The full name = %s\n", strcat(name, strcat(title,surname)));
    printf("");
    return 0;
}