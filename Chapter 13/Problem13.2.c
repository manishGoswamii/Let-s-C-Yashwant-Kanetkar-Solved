#include <stdio.h>
#include <stdlib.h>

void Display_Array(int *, int);
void Insert_Values(int *, int);
void Copy_The_Array(int *, int);

int main()
{   int num, *ptr;
    printf("Enter the number of elements you want in the array\n");
    scanf("%d", &num);
    ptr = (int *)malloc(sizeof(int) * num);

    Insert_Values(ptr, num);

    Display_Array(ptr, num);

    Copy_The_Array(ptr, num);

    return 0;
}


void Insert_Values(int *ptr, int num)
{
    for(int i = 0; i<num; i++)
    {
        printf("Enter the value for array[%d]\n", i);
        scanf("%d", &ptr[i]);
    }
printf("\n\n");
    return ;
}



void Display_Array(int *ptr, int num)
{
    for(int i = 0; i<num; i++)
    printf("%d\t", ptr[i]);
    
    printf("\n\n");
    return ;
}


void Copy_The_Array(int *ptr, int num)
{
    int *ptr2;
     ptr2 = malloc(sizeof(int) * num);
    int i,j ;
    for(i=num-1,j=0; i>=0; i--, j++)
    { 
         ptr2[i] = ptr[j];
    }
       
    Display_Array(ptr2,num);

    return ;
}