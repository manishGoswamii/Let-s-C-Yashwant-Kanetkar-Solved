#include <stdio.h>
#include <stdlib.h>

void Insert_Values(int *, int);
void Display_Array(int *, int );
void Insertion_Sort(int *,int);

int main()
{   int num, *ptr;
    printf("Enter the number of elements :\n");
    scanf("%d", &num);
    ptr = (int *)calloc(num, sizeof(int));
    
    Insert_Values(ptr, num);

    Display_Array(ptr, num);

    Insertion_Sort(ptr, num);

    Display_Array(ptr, num);

    return 0;
}

void Insert_Values(int *ptr, int num)
{
    for(int i = 0; i<num; i++)
    {
        printf("Enter the value for Array[%d]:\n", ptr[i]);
        scanf("%d", &ptr[i]);
    }
   
   printf("\n\n");

   return ;
}

void Display_Array(int *ptr, int num)
{
    for(int i = 0; i< num; i++)
    {
        printf("%d\t", ptr[i]);
    }
printf("\n\n");

return ;

}

void Insertion_Sort(int *ptr, int num)
{   
    
    for(int i = 1; i<num; i++)
    {
       int temp = ptr[i];
       int j;
        for(j = i-1; j >=0 && temp<ptr[j]; j--)
        {
             ptr[j+1] = ptr[j]; 
        }
    ptr[j+1] = temp;
    }
    return ;
}