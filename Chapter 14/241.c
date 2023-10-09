#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Display_Values(int **, int, int );
void Insert_Values(int **,int , int );
int main()
{   int rows,columns;
    printf("A 2-D Arry?\n");
    printf("Enter the number of Rows you want :\t");
    scanf("%d", &rows);

    printf("Enter the number of Columns :\t");
    scanf("%d", &columns);

int **ptr = (int **)malloc(rows*sizeof(int*));
int i;
for(i =0; i< rows; i++)
{
    ptr[i] = (int *)malloc(columns*sizeof(int));
}

Insert_Values(ptr, rows, columns);

Display_Values(ptr, rows, columns);


    return 0;
}

void Insert_Values(int **ptr, int rows, int columns)
{
    for(int i =0; i<rows; i++)
    {
        for(int j =0; j<columns; j++)
        {
            printf("Enter the value for Array[%d][%d]:\t", i, j);
            scanf("%d", &ptr[i][j]);
        }
    }
    return ;
}

void Display_Values(int **ptr, int rows, int columns )
{
    for(int i =0; i<rows; i++)
    {
        for(int j =0; j<columns ; j++)
        {
            printf("%d\t", ptr[i][j]);
        }
        printf("\n\n");
    }

    return ;
}