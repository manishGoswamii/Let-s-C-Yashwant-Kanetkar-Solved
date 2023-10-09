#include <stdio.h>
void increment();
void decrement();

int main()
{extern int i ;
   printf("\n i = %d\n", i);
   increment();
   increment();
   decrement();
   decrement();
    return 0;}
int i ;
void increment()
{
extern int i;
i = i + 1;
printf("On increment i = %d\n", i);
}

void decrement()
{
extern int i ;
i = i - 1;
printf("On decrement i = %d\n", i);
}