#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    char *array[] = {"You will rejoice to hear that", "no disaster has accompained the ","commencment of the enterpsie","which you had regared with such evil forebodings", "Mary Shelley"};

    char string[20];
    printf("Enter the string you want to search in the list:\n");
    scanf("%[^\n]", string);

    char string2[20];
    printf("Enter the string to be placed\n");
    fflush(stdin);
    scanf("%[^\n]", string2);

    char *ptr;
    ptr = NULL;
    for(int i = 0; array[i] != 0; i++)
    {   
        ptr = (strstr(array[i], string ) );

    if(ptr != NULL)
    {   printf("String FOUND %s:\t", string);
        strcpy(ptr, string2);
        printf("String replaced %s\t", ptr );
        return 0;
    }
    
        
    }
    printf("String %s NOT found in the list\n\n", string);

    return 0;

}