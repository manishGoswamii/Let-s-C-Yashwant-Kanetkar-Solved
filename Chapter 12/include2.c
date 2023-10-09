#include <stdio.h>
void Add(void);
void Add ()
{

   int x, y, z;
   printf("Two numbers and you are in Add\n");
   scanf("%d %d", &x, &y);
   z = x+y;
   printf("Add = %d\n", z); 

}