#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Extract(char *);
int main(void)
{   
    char string[50];
    char string2[50];
    printf("Enter the String:\t");
    scanf("%[^\n]", &string);

    printf("The String you entered :\n");
    puts(string);
   fflush(stdin);
    printf("Enter other string :\n");
    gets(string2);
    printf("The String you entered %s\n", string2);

    Extract(string);
    
    return 0;
}

void Extract(char *ptr)
{
    int start, characters;
    printf("Enter the place from where you want to start the extraction :\t");
    scanf("%d", &start);
    printf("Upto characters?\t");
    scanf("%d", &characters);

    if(start < 0 || start > strlen(ptr))
    {
    printf("Improper Imposition value:\n");
    exit(EXIT_FAILURE);
    }

    if(characters < 0)
    {
        characters = 0;
    }
    for(int i = (start - 1); i < characters; i++)
    {
        printf("%c", ptr[i]);
    }

    return ;
}