#include <stdio.h>
#include <stdlib.h>
void Insert_Values(int **, int, int);
void Display_Values(int **, int , int);
void Multiplication_Of_Matrices(int **, int **, int , int, int, int);
int main(void)
{   int rows, columns, rows2, columns2,**ptr, **ptr2;
    printf("Addition Of Matrices?\n");
        
    printf("Enter the Number Of ROWS for first Matrix:\t");
    scanf("%d", &rows);

    printf("Enter the Number of COLUMNS for first Matrix :\t");
    scanf("%d", &columns);
        
    printf("Enter the Number Of ROWS for second Matrix:\t");
    scanf("%d", &rows2);

    printf("Enter the Number of COLUMNS for second Matrix:\t");
    scanf("%d", &columns2);

    int i, j;
    ptr = (int **)malloc(rows*sizeof(int *));
    
    for(i =0; i<rows; i++)
    {
        ptr[i] = (int *)malloc(columns*sizeof(int));
    }

    
    ptr2 = (int **)malloc(rows2*sizeof(int *));
    
    for( i =0; i<rows; i++)
    {
        ptr2[i] = (int *)malloc(columns2*sizeof(int));
    }


    Insert_Values(ptr, rows, columns);
    
    Display_Values(ptr, rows, columns);

    Insert_Values(ptr2, rows, columns);

    Display_Values(ptr2, rows, columns);

    Multiplication_Of_Matrices(ptr, ptr2, rows, columns, rows2, columns2);
 
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

void Multiplication_Of_Matrices(int **ptr,int** ptr2,int rows,int columns,int rows2,int columns2)
{
int **ptr3, i,j;
ptr3 = (int **)malloc(sizeof(int)*rows);
for( i =0; i<rows; i++ )
{
ptr3[i] = (int *)malloc(sizeof(int)* columns);

}


if(columns == rows2)
{
for(int i = 0; i<rows; i++)
{
    for(int j= 0; j<columns2; j++)
    {   int sum = 0;
        for(int k = 0; k<columns; k++)
        {
            sum = sum + ptr[i][k]*ptr2[k][j];

        }
        ptr3[i][j] = sum;
    }
}

Display_Values(ptr3, rows, columns2);
}
else 
printf("The Number of Rows of first Matrix is not equal to the Number of Columns of Second Matrix\n, so Matrix Multiplication is not possible\n");

return;
}