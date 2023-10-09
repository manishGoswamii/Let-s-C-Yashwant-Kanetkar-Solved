#include <stdio.h>
#include <stdlib.h>

void Insert_Values(int *, int);
void Display_Array(int *, int);
int Smallest_Number(int *, int);
int main()
{   int num, *ptr;
    printf("Enter the number of elements you want to create : \n");
    scanf("%d", &num);
    ptr = (int *)malloc(sizeof(int)*num);
    
    Insert_Values(ptr, num);

    Display_Array(ptr, num);

   int smallest =  Smallest_Number(ptr, num);

   printf("The Smallest Number in the array is : %d\n", smallest);

    return 0;
}


void Insert_Values(int *ptr, int num)
{
    for(int i = 0; i<num; i++)
    {
        printf("Enter the value for Array[%d] :\n", i);
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

    return ;
}

int Smallest_Number(int *ptr, int num)
{
    int smallest = ptr[0];
    
    for(int i =0; i<num; i++)
    {
        if(smallest > ptr[i])
        smallest = ptr[i];
    }

printf("\n\n");

return smallest;
}