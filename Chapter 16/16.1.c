#include <Stdio.h>
#include <stdlib.h>
#include <string.h>
void Receive_String(char *);
int main(void)
{
    char *array[] = {"We will teach you how to", "Move a mountain", "Level a building", "Erase the past", "Make a Million", "all through C"};

    char str1[20], *p;

    Receive_String(str1);
 
 for(int i = 0; *array[i] != 0; i++)
 {
     p = strstr(array[i], str1);

     if(p!=NULL)
     {
         printf("The string %s is present in the list", str1);
         return 0;
     }




 }

 printf("Sttring %s is not found\n", str1);

    return 0;
}




void Receive_String(char *ptr)
{
    printf("Enter the string to be searched:\n\n");
    fflush(stdin);
    scanf("%[^\n]", ptr);
    return;
}