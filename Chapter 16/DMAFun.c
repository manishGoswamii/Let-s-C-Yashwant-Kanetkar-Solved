#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Insert_Names(int, char **);
void Display(char** , int);
int main(void)

{

int num;

printf("How many names: \n");

scanf("%d", &num);

char *nameArray[num];

 Insert_Names(num, nameArray);

 Display(nameArray, num);

 

    return 0;
}



void Insert_Names(int num, char **nameList)
{   
    int i, len;

    char *nameListLocal[num];
    char *temporary;

    char name[30];

    for(i= 0; i<num; i++)

    {
        printf("Enter ypu name:\t");
        fflush(stdin);
        scanf("%[^\n]", name);

        len  = strlen(name);

        temporary = (char *)malloc(len+1);

        strcpy(temporary, name);

        nameListLocal[i] = temporary;

    }

*nameList  = nameListLocal; 


    return;
}



void Display( char **array,int num )
{
    for(int i =0; i<num; i++)
    {
        printf("%s\n", *array[i]);
    
    }
    return ;

}