#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void DMA(int, char *);
void Print_The_String(char *[], int);
int main(void)


{   int num;
 
    printf("How many names does your list required?\t");

    scanf("%d", &num);

     char *nameList[num];

     DMA(num, nameList);


Print_The_String(nameList,num);
    
    
    return 0;
}



void DMA(int num, char *ptr)
{  
     char *nameList[num];

    for (int counter = 0; counter < num; counter++)
    
    {
    
    char name[50];
    
    printf("\n\nEnter your name!\n\n");

    fflush(stdin);

    scanf("%[^\n]", name);
    

    int len = strlen(name);
    
    
    
      nameList[counter]= (char *)malloc(len+1);

    strcpy( nameList[counter], name);

    }

    *ptr = nameList;


return;
        
}



void Print_The_String(char *ptr[], int num)
{
    for(int i = 0; i<num; i++)
    {
        printf("\n\n%s\n\n", ptr[i]);
    }
    return;
}
