#include <stdio.h>
int main()
{
int Rows, k = 0, n ;

printf("Enter the number of Rows\n");
scanf("%d", &Rows);
n=(Rows+1)/2 ;

for(int i = 1; i<= Rows; i++)
{  i <=n ? k++: k--;

    for(int j = 1; j <= Rows; j++)
{     if( j>=n+1-k && j<=n-1+k)
  printf("Chup Randi"); 
  else printf(" ");}
printf("\n");

}
    return 0;}