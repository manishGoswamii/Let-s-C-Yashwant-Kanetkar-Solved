
#include <stdio.h>

int main()
{
     int a,b,c,d;
     int i,j;

   printf("\n Enter the rows and columns for the first matrix\n");
   scanf("%d %d", &a,&b);

   printf("\n Enter the rows and columns for the second matrix\n");
   scanf("%d %d", &c,&d);
    int array1[a][b], array2[c][d];

   for ( i=0;   i<a;    i++ )
   {
       for ( j=0;   j<b;    j++ )
       {
         printf("\n First matrix:\t Enter the value for %d row and %d column\n", i+1,j+1);
        scanf("%d", &array1[i][j]);
       }
   }

   for ( i=0;   i<c;    i++ )
   {
       for ( j=0;   j<d;    j++ )
       {
         printf("\n Second matrix:\t Enter the value for %d row and %d column\n", i+1,j+1);
        scanf("%d", &array2[i][j]);
       }
   }

   for ( i=0;   i<a;    i++ )
   {
       for( j=0;    j<b;    j++)
       {
           printf("%d\t", array1[i][j]);
       }
       printf("\n");
   }

printf("\n\n");
    for ( i=0;   i<c;    i++ )
   {
       for( j=0;    j<d;    j++)
       {
           printf("%d\t", array2[i][j]);
       }
       printf("\n");
   }


   if(b==c)
   {
int array3[a][d];
int sum;
for(i=0; i<a; i++)
{    
    for(j=0; j<d; j++)
    {  sum = 0; 
     for(int k = 0; k < b; k++)
     {sum = sum + array1[i][k]*array2[k][j];} 
     array3[i][j] = sum;
    }

}
printf("\n The Matrix obtained after multiplying the first and second matrix is :\n");

for(i=0; i<a; i++)
{
    for(j=0; j<d; j++)
    {
    printf("%d\t", array3[i][j]);
    }
printf("\n");
}

   }
    return 0;
}
