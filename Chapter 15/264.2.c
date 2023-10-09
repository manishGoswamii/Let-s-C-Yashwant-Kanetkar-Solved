#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void xstrcpy (char *,char*);
int main(void)
{
char source[] = "I wonder how I wonder why";
char target[30];
xstrcpy(target, source);
printf("Source = %s\n", source);
printf("Target = %s\n", target);
    return 0;
}
void xstrcpy(char *target, char *source)
{
    while(*source != '\0')
    {
        *(target) = *(source);
        target++;
        source++;
    }
    *target = '\0';

    return ; 
}