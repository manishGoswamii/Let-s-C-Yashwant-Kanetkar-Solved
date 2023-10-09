#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int xstrcmp(char *, char *);
int main(void)
{
    char name[] = "Tom";
    char name2[] = "Tomas";
    int count = xstrcmp(name, name2);

    if(count == 0)
    {
        printf("Both the Strings match\n");
    }
    else printf("Strings do not match\n");

    return 0
    ;
}
int xstrcmp(char *name, char *name2)
{ 
 int count = 0;
    while(*(name)!= '\0' || *(name2) != '\0' )
    {

        if(*(name) != *(name2))
        {
            count++ ;
            break;
        }
        name++; name2++;
    }


return count;
}