#include <stdio.h>
int main()
{
int a,b;
printf("Wanna create a matrix?\n");
printf("Enter the number of rows\n");
scanf("%d", &a);
printf("Enter the number of colums\n");
scanf("%d", &b);
int array[a][b];
for(int i = 0; i<=a-1; i++ )
{
for(int j = 0; j <= b - 1; j++)
{
printf("Enter the %d %d element of the matrix\n", i,j);
scanf("%d", &array[i][j]);
}
printf("\n");
}

printf("You have successfuly created a matrix of %d rows X %d columns\n ", a,b);
for(int i = 0; i<= a - 1; i++)
{
    for(int j = 0; j<= b-1; j++)
     {
         printf("%d\t", array[i][j]);
     }
printf("\n");
}

return 0;
}