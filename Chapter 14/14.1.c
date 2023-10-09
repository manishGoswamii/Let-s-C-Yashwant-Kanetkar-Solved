#include <stdio.h>
#include <stdlib.h>

void Insert_Values(int **, int , int);
void Display_Values(int **, int, int);
int Greatest_Value(int **, int, int,  int*, int*);

int main()
{   int rows, columns, **ptr;
    printf("2D Array Agaim?\n");
    
    printf("Enter the Number of Rows\t");
    scanf("%d", &rows);

    printf("Enter the Number of Columns\t");
    scanf("%d", &columns);

    ptr = (int **)calloc(rows, sizeof(int *));

    for(int i = 0; i<rows; i++)
    {
        ptr[i] = (int*)calloc(columns, sizeof(int));       
    }

    Insert_Values(ptr, rows, columns);
    Display_Values(ptr, rows, columns);
    int row , column;
    int greatest = Greatest_Value(ptr, rows, columns, &row, &column);
    
    printf("The Greatest Number in the Array is %d \n", greatest);
    printf("It is at the position %d Row and %d Column\n", row, column);
    return 0;
}

void Insert_Values(int **ptr, int rows, int columns)
{
    for(int i = 0; i<rows ; i++)
    {
        for(int j =0; j< columns; j++)
        {
            printf("Enter the values for Array[%d][%d]:\t", i,j);
            scanf("%d", &ptr[i][j]);
        }
    }
return ;
}

void Display_Values(int **ptr, int rows, int columns)
{
    for(int i = 0 ; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            printf("%d\t", ptr[i][j]);
        }

        printf("\n\n");
    }
}

int Greatest_Value(int **ptr, int rows, int columns, int *row, int *column)
{   
int greatest = ptr[0][0];

for(int i =0; i<rows; i++)
{
    for(int j =0; j<columns; j++)
    {
        if(greatest < ptr[i][j])
        {
            greatest = ptr[i][j];

            *row = i;
            *column = j;
        }
    }
} 

    return greatest;
}