#include <stdio.h>
#include <stdlib.h>
void Display_Array(int *, int);
void Insert_Values(int *, int);
void Search_The_Number(int *, int, int);

int main()
{   
    int num, *ptr;
    printf("Enter the number of elements in the Array\n");
    scanf("%d", &num);
    ptr = (int *)malloc(sizeof(int)*num);
    
    Insert_Values(ptr, num);
    Display_Array(ptr, num);

    char choice = 'y';

    while(choice == 'y' || choice == 'Y')
    {
    int number;
    printf("Enter the number to be searched\n");
    scanf("%d", &number);

    Search_The_Number(ptr, num, number);
    printf("\n\nDo you want to seach more?\n\n");
    scanf(" %c", &choice);
    }
    return 0;
}


void Insert_Values(int *ptr, int num)
{   for(int i = 0; i<num; i++)
    {
    printf("Enter the value for Array[%d]:\n", i);
    scanf("%d", &ptr[i]);
    }
printf("\n\n");

return;
}

void Display_Array(int *ptr, int num)
{   
    for(int i =0; i<num; i++)
    {
        printf("%d\t", ptr[i]);
    }
    printf("\n\n");
    return;
}

void Search_The_Number(int *ptr, int num, int number)
{  
    
    
    
    int j = 0;
    for(int i  = 0; i< num; i++)
    {
        if(ptr[i] == number)
              j++;
    }

    printf("The number %d occurs %d times in the Array:\n\n", number, j);

    Display_Array(ptr, num);
    
    return ;

}