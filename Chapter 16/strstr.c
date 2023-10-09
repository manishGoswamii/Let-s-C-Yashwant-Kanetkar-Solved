#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    char *array[] = {"You will rejoice to hear that", "no disaster has accompained the ","commencment of the enterpsie","which you had regared with such evil forebodings", "Mary Shelley"};

    char string[20];
    printf("Enter the string you want to search in the list:\n");
    scanf("%[^\n]", string);

    char *ptr;
    ptr = NULL;
    for(int i = 0; array[i] != 0; i++)
    {   
        ptr = (strstr(array[i], string ) );

    if(ptr != NULL)
    {
        printf("String %s is FOUND in the list\n", string);
        return 0;
    }
    
        
    }
    printf("String %s NOT found in the list\n\n", string);

    return 0;

}