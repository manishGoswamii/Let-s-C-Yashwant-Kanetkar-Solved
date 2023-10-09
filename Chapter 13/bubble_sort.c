#include <stdio.h>
#include <stdlib.h>
void Bubble_Sort(int *, int);

int main()
{   int N, i, *p;
    printf("Enter the number of elements in array\n");
    scanf("%d", &N);
    
    p = (int *)malloc(sizeof(int)*N);

    for(i=0; i<N; i++)
    {
        printf("Enter the value for Array[%d]:\n",i);
        scanf("%d", &p[i]);
    }

    printf("\n The Array created\n\n");

    for(i=0; i<N; i++)
    {
    printf("%d\t", p[i]);}
    
    Bubble_Sort(p,N);

    return 0;
}
void Bubble_Sort(int *array, int N)
{
    int i,j;
    for(i = 0; i < N; i++)
    {    
        int temp = 0;
        for(j=0; j < N-i; j++)
        {
            if(array[j] > array[j+1])
            {   
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

            } 
        }
    }

    printf("\n The sorted Array\n");

    for(i=0; i<N; i++)
    printf("%d\t", array[i]);

    return;
}