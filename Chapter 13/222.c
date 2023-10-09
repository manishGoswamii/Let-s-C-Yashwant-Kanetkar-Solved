#include <stdio.h>
int main()
{
  int array[]= {10, 20, 30, 45, 67, 56, 74};
  int i = 4, *j, *k, *x, *y;
  j = &i;
    printf("The Original Address of i = %d\n ", j);
  j = j +9;
   printf("The Addedd address of i = %d\n", j);
   k = &i;
   printf("The Original Address of i for k = %d\n", k);
   k = k-3; 
   printf("The Subtracted address of i for k = %d\n", k);
   x = &array[1];
   y= &array[5];
   printf("The Address of array[1] = %d\n", x);
   printf("The Address of array[5] = %d\n", y);
   
   printf("The Address obtained after subtracting eachother = %d\n ", y-x);
   
   j = &array[4];
   k = array +4;
   printf("The Address of array[4] = %d\n", j);
   printf("The Value of k = %d\n", k);
   printf("The Value of k = %d\n", (array+4));
    return 0;
}