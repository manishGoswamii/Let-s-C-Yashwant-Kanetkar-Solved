#include <stdio.h>
#include <stdlib.h>

void Insert_Values(int *, int);
void Display_Array(int *, int);
void Modify(int *, int);
int main()
{
    printf("Entee the number of elements you want :\n");
    int num, *ptr;
    scanf("%d", &num);
    ptr = (int *)calloc(num, sizeof(int));

    Insert_Values(ptr, num);
    
    Display_Array(ptr, num);

    Modify(ptr, num);

    Display_Array(ptr, num);

    return 0;
}

void Insert_Values(int *ptr, int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("Enter the value for Array[%d] :\n", i);
        scanf("%d", &ptr[i]);
    }
printf("\n\n");

return ;
}

void Display_Array(int *ptr, int num)
{
    for(int i =0 ; i< num; i++)
    {
        printf("%d\t", ptr[i]);
    }
    printf("\n\n");

return ;
}

void Modify(int *ptr, int num)
{
    for(int i =0; i< num; i++)
    {
        ptr[i] = 3*ptr[i];
    }
    return;
}