#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max, i, *p, *c;
    /*
    printf("Enter the array size\n");
    scanf("%d", &max);
    p = (int *)malloc(max*sizeof(int));
    c = (int *)calloc(max, 5);   
    *p = 1123;*/
    int *a;
    a = (int*)calloc(5,4);
    for(i=0; i< 5; i++)
    {
    printf("Enter the values for Array[%d]\n", i);
    scanf("%d", &a[i]);
     }
     for(i=0; i<5; i++)
     printf("%d\t", a[i]);

     float array[5], *ptr;
     ptr = array;
     for(i=0; i< 5; i++)
    {
    printf("Enter the values for Array[%d]\n", i);
    scanf("%f", &ptr[i]);
     }
for(i=0; i<5; i++)
     printf("%f\t", ptr[i]);
      return 0;
}