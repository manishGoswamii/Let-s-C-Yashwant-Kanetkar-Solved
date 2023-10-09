#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void xstrrev(char *);
int main(void)
{
    char array[][50] = {"To ere is human", "But to reall mess things up", "One Needs to knowC!!"};
    char *array2[] = {"Something in your mitrocondira", "it talks to you like","Knock kno0ck let the devil in", "VENOM!"};
    printf("%s\n\n", *array2);

    int i;
    int len;

    for(i= 0; i<3; i++)
    {   xstrrev(array[i]);
    printf("The Reversed String = %s\n", array[i]);

    }
    
    return 0;
}
 void xstrrev(char *ptr)
    {
        int len, i;

        len = strlen(ptr);

        char temp, *t;

        t= ptr + len - 1;

        for(i= 0; i<=(len/2); i++)
        {   
            temp = *t;
            *t= *ptr;
            *ptr = temp;
            t--;
            ptr++;
            
        }
        return;
    }
