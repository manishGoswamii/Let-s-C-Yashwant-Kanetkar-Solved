#include <stdio.h>
int main()
{
int i = 3;
int *j = &i;

printf("Value of i = %d\n", i);
printf("Value of j = %d\n\n", j);

printf("The address of i = %u\n", &i);
printf("The address of j = %u\n\n", &j);

printf("The address of i = %u\n", j);
printf("Content of i = %d\n", *j);
printf("Content of i = %d\n\n", *&i);


    return 0;
}