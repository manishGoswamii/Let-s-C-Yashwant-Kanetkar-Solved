
#include <stdio.h>
#include<stdlib.h>

void Display_Values(int **, int , int);
void Insert_Values(int **, int, int );
int main(void)
{
    printf("2D Array?\n");
    int rows, columns;
    int i,j;
    
    printf("Enter the numbers of Rows you want:\t");
    scanf("%d", &rows);

    printf("Enter the number of Columns you want:\t");
    scanf("%d", &columns);

    int **ptr = (int **)malloc(rows*sizeof(int*));
    for(i = 0; i< rows; i++)
    {
        ptr[i] = (int *)malloc(columns*sizeof(int));
    }

Insert_Values(ptr, rows, columns);

Display_Values(ptr, rows, columns);


int array[4][2] = { {1234,56}, {1212,33}, {1432,80}, {1312,78}};

for(i=0; i<4; i++)
{
    for(j=0; j<2; j++)
    {
        printf("%d\t", *(*(array+i)+j));
    }
    printf("\n\n");
}


    return 0;
}

void Insert_Values(int **ptr, int rows, int columns )
{
    for(int i = 0; i< rows; i++)
    {
        for(int j =0; j<columns; j++)
        {
            printf("Enter the value for Array[%d][%d]:\t", i, j);
            scanf("%d", &ptr[i][j]);
        }
    }

    printf("\n\n");

    return;
}

void Display_Values(int **ptr, int rows, int columns)
{
for(int i =0; i<rows; i++)
{
    for(int j = 0; j<columns; j++)
    {
        printf("%d\t", ptr[i][j]);
    }
printf("\n");
}
printf("\n\n");
    return ;
}