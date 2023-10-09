#include <stdio.h>
int main()
{   int a,b,c,d,e,f;
printf("Wanna create two matrices for addition?\n");
printf("XD\n");
printf("Enter the rows and columns for first matrix\n");
scanf("%d %d", &a,&b);
printf("Enter the number of rows anbd columns for second matrix\n");
scanf("%d %d", &c,&d);

int array1[a][b], array2[c][d];

int i,j,k,l;
for(i = 0; i < a; i++)
{
for(j = 0; j < b; j++)
{
    printf("First Matrix:\tEnter the value for %d row and %d column position \n", i+1, j+1);
    scanf("%d", &array1[i][j]);
}

}
printf("\n");

for(i = 0;i <c; i++ )
{

for(j = 0; j <d; j++)
{

printf("Second Matrix:\tEnter the values for %d row and %d column\n", i+1, j+1);
scanf("%d", &array2[i][j]);

}

}

printf("The Two arrays you created\n");

for( i = 0; i<a; i++)
{
for(j = 0; j<b; j++)
{
printf("%d\t", array1[i][j]);
}
printf("\n");}

printf("\n");

for(i = 0; i <c; i++)
{
    for( j = 0; j <d; j++)
    {
     printf("%d\t", array2[i][j]);

    }
    printf("\n");
}

if(a==c && b==d)
{
int array3[a][b];
for(i=0; i < a; i++)
{
    for(j= 0; j < b; j++)
    {
     array3[i][j] = array1[i][j] + array2[i][j];

    }
}

printf("The matrix obtained after adding the first and second matrices is:\n");

for(i=0; i < a; i++)
{
for(j = 0; j < b; j++)
{
    printf("%d\t", array3[i][j]);
}
printf("\n");
}
}
else printf("\nThe rows and columns of two matrices does not match, hence they cannot be added\n");

    return 0;

}
