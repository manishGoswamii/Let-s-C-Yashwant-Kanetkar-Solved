#include <stdio.h>
int function(int *);
int main()
{
    int i  =35, z;
   z =  function(&i);
    printf("%d\n", z);
        return 0;}

        int function(int *m)
        {
          return *m + 2;

        }