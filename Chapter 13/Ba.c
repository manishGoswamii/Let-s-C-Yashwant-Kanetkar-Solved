#include <stdio.h>
#include <stdlib.h>
void Display_Array(int *, int);
void Insert_Values(int *, int);
void Count_The_Type(int *, int);
int main()
{
    int num, *ptr;
    printf("The number of elements you want?\n");
    scanf("%d", &num);
    ptr = (int *)malloc(sizeof(int)*num);

    Insert_Values(ptr, num);
    Display_Array(ptr, num);
    Count_The_Type(ptr,num);    
    return 0;
}

void Insert_Values(int *ptr, int num)
{
    for(int i = 0; i< num; i++)
    {
        printf("Enter the value for Array[%d]\n", i);
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

return;
}

void Count_The_Type(int *ptr, int num)
{
    int pos, neg, zero;
    pos = neg = zero = 0;
    for(int i =0; i<num; i++)
    {
        if(ptr[i]>0)
        pos++;

        else if(ptr[i]==0)
        zero++;

        else neg++;

    }
    Display_Array(ptr, num);
    printf(" \n\n Positives = %d\t Negatives = %d\t Zeros = %d", pos, neg, zero);

    return ;
}