#include <stdio.h>
#include <stdlib.h>

void Insert_Values(int **, int, int);
void Display_Values(int **, int , int);
void Check(void);
void Function(int [][], int , int);
int main(void)
{
    printf("2D Array?\n");
    printf("Enter the Number of ROWS: \t");

    int rows, columns;
    scanf("%d", &rows);

    printf("Enter the Number of Columns: \t");
    scanf("%d", &columns);
    
    int **ptr;
   
    ptr =(int **)malloc(rows*sizeof(int*));

    for(int i = 0; i<rows; i++)
    {
        ptr[i] = (int *)malloc(columns*sizeof(int));
    }

    //Insert_Values(ptr, rows, columns);

 //   Display_Values(ptr, rows, columns);

 Check();
    return 0;
}
void Insert_Values(int **ptr, int rows, int columns)
{
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<columns; j++)
        {
            printf("Enter the value for Array[%d][%d]:\t", i, j);
            scanf("%d", &ptr[i][j]);
        }
    }
    return;
}

void Display_Values(int **ptr, int rows, int columns)
{
    for(int i =0; i<rows; i++)
    {
        for(int j =0; j<columns ; j++)
    {
        printf("%d\t\t", ptr[i][j]);
    }
    printf("\n\n");
    }
return;
}

//Chutiya Tarika 
void Check(void)
{
    int s[4][2] = { {1234, 56}, {1212,33}, {1436,80},{1321,78} };
    int (*p)[2];

    int i,j, *pint; 

     p= s;

    for(i= 0; i<4; i++)
    { 
      pint  = (int*)p;

        printf("\n");

        for(j=0; j<2; j++)
        {
            printf("%d\t", *(pint +j));
        }
        p++;
    }
    return;
}
//Needs Improvement //
void Smart_Way(void)
{   
    int rows, columns;

    printf("Enter the Number of Rows :\t");
    scanf("%d", &rows);

    printf("Enter the Number of Columns : \t");
    scanf("%d", &columns);
    
    int **ptr;
    
    ptr = (int **)malloc(sizeof(int*) * rows);

    for(int i =0; i< rows; i++)
    {
        ptr[i] = (int *)malloc(columns*sizeof(int));
    }

    int (*ptr)[columns];
    return;
}
//Need Contemplation //
void Function(int array[][], int rows, int columns)
{

    return ;
}