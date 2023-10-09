#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Check(char *);
int Is_Vowel(char );
int main(void)
{   
    printf("Enter any sentence :\n");
    char array[50];
    scanf("%[^\n]", array);

    Check(array);

    return 0;
}
void Check(char *ptr)
{ 
      int count = 0;
      int found = 0;
      int len = strlen(ptr);

    for(int i= 0; i<len; i++)
    {   
        if(Is_Vowel(ptr[i]))
        {
            found++;
            
        }
        else { 
            found = 0;
        }
        if(found == 2)
        {
            printf("The vowels %c%c are occurring in the succession\n", ptr[i-1],ptr[i]);
            count++;
        }

    }


    printf("Total Number of Times two vowels occuring in the succession %d\n", count);

    return;
}

int Is_Vowel(char character)
{
    switch (character)
    {
        case 'A' : 
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' : 
        return 1;
        default : return 0;


    }

}