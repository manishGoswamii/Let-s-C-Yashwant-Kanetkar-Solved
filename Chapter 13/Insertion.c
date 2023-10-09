#include <stdio.h>
#include <stdlib.h>

void Insertion_Sort(int *, int);
void Print_Array(int *, int);
void Insert_Values(int *, int);

int main()
{   int num, *ptr;
    printf("Enter the number of elements in the array :\n");

    scanf("%d", &num);

    ptr = (int*)calloc(num, sizeof(int));

    Insert_Values(ptr,num);
    
    Print_Array(ptr, num);
   
    Insertion_Sort(ptr, num);

    Print_Array(ptr, num);
  
    return 0;
}
void Insertion_Sort(int *array,int N)
{
    int temp; 
    int i,j;

    for(i=1;i<N;i++)
    {
        temp = array[i];
     for(j=i-1; j >= 0 && temp<array[j] ; j--)
     { 
           array[j+1] = array[j];
         }
         
     array[j+1] = temp;

    }
    return ;
}

void Print_Array(int *p, int N)
{  for(int i = 0; i< N; i++)
    {
    printf("%d\t", p[i]);
    }
    printf("\n\n");
    return;
}

void Insert_Values(int *ptr, int N)
{   
    for(int i =0; i<N; i++)
    {
    printf("Enter the value for array[%d] :\n",i);
    scanf("%d", &ptr[i]);
    }
return ;
}