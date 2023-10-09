#include <stdio.h>
#include <stdlib.h>
void Selection_Sort(int [], int);
int Minimum(int [], int, int);
int main()
{
    int array[10] = {5,16,23,2,90,8,73,32,6,10};
    int i, j;
    for(i=0; i<10; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n\n");

    Selection_Sort(array, 10);

    return 0;
}
void Selection_Sort(int array[], int N)
{
    int i,j,k =0;

    int min;
    int temp;

    for(i=0; i<N; i++)
    {      
           min = Minimum(array, N,k);
           temp  = array[i];
           array[i] = array[min];
           array[min] = temp;
           k++;                      }


     for(i=0; i<N; i++)
     printf("%d\t", array[i]);
     
     return;
    }

int Minimum(int array[],int N, int k)
{
  int location = k;
  int i = k;
  for(i = k; i < N; i++)
  {
    if(array[location] > array[i])
    {
        location = i;
    }

  }
    return location;
}