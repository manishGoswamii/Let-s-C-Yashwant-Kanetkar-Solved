#include <stdio.h>
int main()
{
  int mat1[2][2];
  int mat2[2][2];

  for(int i = 0; i<=1; i++)
  {
      for(int j = 0; j<=1; j++)
      { 
          printf("Enter the value of %d %d for matrix1\n", i,j);
          scanf("%d", &mat1[i][j]);


      }
  }

  
  for(int i = 0; i<=1; i++)
  {
      for(int j = 0; j<=1; j++)
      { 
          printf("Enter the value of %d %d for matrix2 \n", i,j);
          scanf("%d", &mat2[i][j]);


      }
  }

int mat3[2][2];
for(int i = 0; i<=1; i++)
{
for(int j = 0; j<=1; j++)

{mat3[i][j] =  mat1[i][j] + mat2[i][j];
printf("%d\t", mat3[i][j]);
}
printf("\n");
}
    return 0;
}