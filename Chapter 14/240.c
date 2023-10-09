#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

   int main()
{  
int rows, columns, variables;
printf("Enter the number of rows:\n");
scanf("%d", &rows);

printf("Enter the number of columns :\n");
scanf("%d", &columns);

int *ptr, **ptr2;   
ptr = (int *)malloc(sizeof(int) * variables);               

ptr2 = (int **)malloc(rows*sizeof(int*));
int i ,j;
for(i=0; i<columns; i++)
{
ptr2[i] = (int *)malloc(columns*sizeof(int));
}


for(i = 0; i<rows; i++)
{
    for(j=0; j<columns; j++)
    {
        printf("Enter the value for Array[%d]{%d]\t", i, j);
        scanf("%d", &ptr2[i][j]);
    }
}

/*7u
//Display Array,//basic Method::
for(i=0; i<rows; i++)
{
    for(j=0; j<columns; j++)
    {
    printf("%d\t", ptr2[i][j]);
    }
    printf("\n");

}

//Method 2
for(i = 0; i<rows; i++)
{
printf("Address = %d\n", (ptr2+i));
    
}
*/
for(i = 0; i<rows; i++)
{
    for(j=0; j<columns; j++)
    {
        printf("Address of each byte : %d\t", (ptr2[i] + j));
        
    }
    
    printf("\n\n");
}

/*
for(i = 0; i<rows; i++)
{
    for(j=0; j<columns; j++)
    {
        printf("%d\t", *(*(ptr2+i) + j));
        
    }
    
    printf("\n");
}
for(i = 0; i<rows; i++)
{
    for(j=0; j<columns; j++)
    {
        printf("%d\t", *(ptr2[i] + j));
        
    }
    
    printf("\n");
}


*/    return 0;
}
