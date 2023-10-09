#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Length(char *);
void Reverse(char *);

int main()
{
    char s[] = "Teri Muummy";

    /*
    printf("The Length of the String = %d\n",Length(s));

    printf("Size Of the String = %d\n", sizeof(s));

    printf("Lenght of the String = %d\n", strlen(s));
*/
    printf("The Reversed is %s\n", strrev(s));
    

    Reverse(s);
 printf("\n%s\n", strlwr(s));
 printf("%s\n", strupr(s));   

    return 0;
}


int Length(char *ptr)
{ int i ;
    for( i = 0; ptr[i] != '\0'; i++)
    ;
    return i;
}


void Reverse(char *ptr)
{ 
    if(*ptr != 0)
    {
        Reverse(ptr+1);
        printf("%c", *ptr);
    }

    return ;
   
}