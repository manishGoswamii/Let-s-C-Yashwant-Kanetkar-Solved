#include <stdio.h>
#include <stdlib.h>
void Insert_Values(int **, int, int);
void Display_Values(int **, int , int);
void Addition_Of_Matrices(int **, int **, int , int);
int main(void)
{   int rows, columns, **ptr, **ptr2;
    printf("Addition Of Matrices?\n");
        
    printf("Enter the Number Of ROWS :\t");
    scanf("%d", &rows);

    printf("Enter the Number of COLUMNS :\t");
    scanf("%d", &columns);

    ptr = (int **)malloc(rows*sizeof(int *));
    
    for(int i =0; i<rows; i++)
    {
        ptr[i] = (int *)malloc(columns*sizeof(int));
    }

    
    ptr2 = (int **)malloc(rows*sizeof(int *));
    
    for(int i =0; i<rows; i++)
    {
        ptr2[i] = (int *)malloc(columns*sizeof(int));
    }


    Insert_Values(ptr, rows, columns);
    
    Display_Values(ptr, rows, columns);

    Insert_Values(ptr2, rows, columns);

    Display_Values(ptr2, rows, columns);

    Addition_Of_Matrices(ptr, ptr2, rows, columns);
 
    return 0;
}

void Insert_Values(int **ptr, int rows, int columns)
{
    for(int i = 0; i<rows; i++)
    {
        for(int j =0; j<columns; j++)
        {
            printf("Enter the value for Array[%d][%d]:\t", i,j);
            scanf("%d", &ptr[i][j]);
        }
    }
    return;
}

void Display_Values(int **ptr, int rows, int columns)
{
    for(int i =0; i<rows; i++)
    {
        for(int j =0; j<columns; j++)
        {
            printf("%d\t", ptr[i][j]);
        }
        printf("\n\n");
    }
    return;
}

void Addition_Of_Matrices(int **ptr, int **ptr2, int rows, int columns)
{

    for(int i =0; i<rows; i++)
    {
        for(int j =0; j<columns; j++)
        {
            printf("%d\t", ptr[i][j]+ ptr2[i][j]);
        }
        printf("\n\n");
    }
}