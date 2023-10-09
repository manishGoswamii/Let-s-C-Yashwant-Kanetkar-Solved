#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void DMA(int);
void Print_The_String(char *[], int);
int main(void)


{   int num;
    printf("%d\n", sizeof(char));
    printf("How many names does your list required?\t");

    scanf("%d", &num);

     DMA(num);

    
    
    return 0;
}



void DMA(int num)
{  
     char *nameList[num];

    for (int counter = 0; counter < num; counter++)
    
    {
    
    char name[50];
    
    printf("\n\nEnter your name!\n\n");

    fflush(stdin);
    scanf("%[^\n]", name);
    

    int len = strlen(name);
    
    char *p;
    
    p = (char *)malloc(len+1);

    strcpy(p, name);

    nameList[counter] = p;
    
    }


Print_The_String(nameList, num);
        
        return;

}





void Print_The_String(char *ptr[], int num)
{
    for(int i = 0; i<num;i++)
    {
        printf("\n\n%s\n\n", ptr[i]);
    }
    return;
}
