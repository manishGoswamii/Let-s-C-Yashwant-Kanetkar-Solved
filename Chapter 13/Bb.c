#include <stdio.h>
#include <stdlib.h>
void Insert_Values(int *, int);
void Display_Array(int *, int);
void Check(int *, int);

int main()
{   int num, *ptr;
    printf("Enter the number of elements\n");
    scanf("%d", &num);
    ptr = (int *)malloc(sizeof(int)*num);

    Insert_Values(ptr, num);
    Display_Array(ptr, num);
    Check(ptr, num);

    return 0;
}


void Insert_Values(int *ptr, int num)
{
    for(int i =0; i<num; i++)
    {
        printf("Enter the value for Array[%d] :\n", i);
        scanf("%d", &ptr[i]);
    }
    printf("\n\n");

    return ;
}


void Display_Array(int *ptr, int num)
{   
    for(int i =0; i<num; i++)
    {
    printf("%d\t", ptr[i]);
    }
    printf("\n\n");

    return ;
 }
 void Check(int *ptr, int num)
 {
     int i, j = 1;
     for(i=0; i<num; i++)
     {
         if (ptr[i] == ptr[num-j])
         printf("Array[%d] = Array[%d - %d]:\n", i, num, j);
         j++;
     }
     printf("\n\n");
     return ;
 }