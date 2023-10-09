#include <stdio.h>


int main()
{ int a,b;
printf("Enter the number of rows for the square matrix\n");
scanf("%d", &a);
b= a;
int i,j,k;
int array1[a][b];

for(i=0; i<a; i++)
{
    for(j=0; j<a; j++)
{
printf("Enter the value for %d %d element\n",i+1, j+1);
scanf("%d", &array1[i][j]);
}

}
printf("\nThe Square Matrix you just entered\n");
for(i=0; i<a; i++)
{
    for(j=0; j<b; j++)
    {
        printf("%d\t", array1[i][j]);
    }
    printf("\n");
}   
   



    return 0;
}
