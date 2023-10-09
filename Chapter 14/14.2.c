#include <stdio.h>
#include <stdlib.h>
void Insert_Values(int **, int , int);
void Display_Values(int **, int, int);
void Transpose(int **, int, int);
int main(void)
{
    int rows, columns, **ptr;
    printf("Enter the Number of Rows:\t");
    scanf("%d", &rows);

    printf("Enter the Number of Columns:\t");
    scanf("%d", &columns);

    ptr = (int**)malloc(sizeof(int*) * rows);

    for(int i =0; i<rows; i++)
    {
        ptr[i] =(int *) malloc(sizeof(int)*columns);
    }
    Insert_Values(ptr, rows, columns);

    
    Display_Values(ptr, rows, columns);

    printf("The Transpose of above Matrix :\n\n");
    
    Transpose(ptr, rows, columns);
    
    
    
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
    printf("\n\n");
    }
return ;
}

void Display_Values(int **ptr,int rows, int columns)
{
    for(int i = 0; i<rows; i++)
    {
        for(int j =0; j<columns; j++)
        {
            printf("%d\t\t", ptr[i][j]);
        }
        printf("\n\n");
    }
    return ;
}

void Transpose(int **ptr, int rows, int columns)
{
    for(int i =0; i<columns; i++)
    {    
        for(int j =0; j<rows; j++)
        {   
            printf("%d\t", ptr[j][i]);
            
        }
        printf("\n\n");
    }
return ;
}