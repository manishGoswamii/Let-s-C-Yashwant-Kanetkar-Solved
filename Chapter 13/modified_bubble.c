#include <stdio.h>
#include <stdlib.h>
void Bubble_Sort(int *, int);
int main()
{   
    int *p, num;
    printf("Enter the elements you want in the array :\n");
    scanf("%d", &num);
    p = (int *)calloc(num, sizeof(int));
    int i, j;

    for(i=0; i<num; i++)
    {
        printf("Enter the value for Array[%d] element\n", i);
        scanf("%d", &p[i]);
    }

  //Array Display
printf("The array created : \n");
    for(i=0; i<num; i++)
    {
        printf("%d\t", p[i]);
    }
     
Bubble_Sort(p, num);

    
printf("\nThe Array Sorted:\n");

for(i=0; i<num; i++)
    {
        printf("%d\t", p[i]);
    }

    return 0;
}

void Bubble_Sort(int *p, int n)
{
    
    int i,j;
    for( i=0; i < n; i++)
    {    int temp = 0;
         int  flag = 0;
        for(j=0; j < n-i ; j++)
        {
            if( p[j] > p[j+1] )
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
                flag=1;

            } 

        }
        
         if(flag==0)
        {
            printf("\nRound = %d\n", i);
            return;
        }

       }
    
    return ;
}