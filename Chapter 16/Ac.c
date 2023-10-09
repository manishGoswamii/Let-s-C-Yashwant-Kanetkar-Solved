#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Delete(char *);
int main(void)
{
    printf("Enter any sentence to delete 'the' from the sentence:\n ");
    char array[50];
    scanf("%[^\n]", array);
    Delete(array);
    printf("Edited array = %s\n", array);
    return 0;
}
void Delete(char *ptr)
{   int len = strlen(ptr);
    for(int i = 0; i<=len;)
    {   
        if(ptr[i]=='t'|| ptr[i] == 'T')
        {
            if(ptr[i+1]=='H'|| ptr[i+1]=='h')
            {
                if(ptr[i+2]=='E' || ptr[i+2]=='e')
                {
                    ptr[i] = ' ';
                    ptr[i+1]= ' ';
                    ptr[i+2]= ' ';
                    i = i + 3;
                    continue;
                }
            }
        }

        i++;

    }

    return;
}