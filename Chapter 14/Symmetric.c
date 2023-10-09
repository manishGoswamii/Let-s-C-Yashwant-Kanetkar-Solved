#include <stdlib.h>
#include <stdio.h>
void Display_Values(int **, int , int);
void Insert_Values(int **, int , int);
void Transpose(int **,int **, int, int);
void Symmetric(int **, int, int);
void Check(int **, int **, int ,int );

int main()
{   int rows, columns, **ptr;
    printf("2D Array? Make sure to enter a SQUARE MATRIX\n");
    printf("Enter the number of ROWS :\t");
    scanf("%d", &rows);

    printf("Enter the number of COLUMNS :\t");
    scanf("%d", &columns);

    ptr = (int **)malloc(rows*sizeof(int *));

    for(int i =0; i<rows; i++)
{
    ptr[i] = (int *)malloc(columns*sizeof(int));
}

Insert_Values(ptr, rows, columns);

Display_Values(ptr, rows, columns);

Symmetric(ptr, rows, columns);



    return 0;
}

void Insert_Values(int **ptr, int rows, int columns)
{
    for(int i =0; i<rows; i++)
    {
        for(int j = 0 ; j<columns; j++)
        {
            printf("Enter the value for Array[%d][%d] :\t" ,i,j);
            scanf("%d", &ptr[i][j]);
        }
    }
    return ;
}

void Display_Values(int **ptr, int rows, int columns )
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

void Symmetric(int **ptr, int rows, int columns)
{  
 int **ptr2 = (int **)malloc(rows*sizeof(int*));
 
 for(int i = 0; i<rows; i++)
 {
     ptr2[i] = (int *)malloc(columns*sizeof(int*));
 }

 Transpose(ptr, ptr2, rows, columns);

 printf("The Trasposed Matrix :\n");

 Display_Values(ptr2, rows, columns);
 
 Check(ptr, ptr2, rows, columns);

    return;
}

void Transpose(int **ptr, int **ptr2, int rows, int columns)
{
    for(int i = 0; i<columns; i++)
    {
        for(int j =0; j<rows; j++)
        {
            ptr2[i][j]  = ptr[j][i] ;
        }
    }
   
    return;
}

void Check(int **ptr, int **ptr2, int rows, int columns)
{
    for(int i =0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            if(ptr[i][j] != ptr2[i][j])
            {
                printf("The Matrix is not symmetric\n\n");
                exit(EXIT_SUCCESS);
            }
        }

    }
    printf("The Matrix is Symmetric : \n\n");
   
    return;
}
