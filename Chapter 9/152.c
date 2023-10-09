#include <stdio.h>
int main()
{
int i =3, *j, **k;
j = &i;
k =&j;
printf("Address of i = %u\n", &i);
printf("Address of i = %u\n", j);
printf("Address of i = %u\n\n", *k);

printf("Address of j = %u\n", &j);
printf("Address of j = %u\n\n", k);
printf("Address of k = %u\n\n", &k);

printf("Value of i = %d\n", i);
printf("Value of i = %d\n", *j);
printf("Value of i = %d\n", **k);
printf("Value of i = %d\n\n", *&i);
printf("Value of j = %d\n", j);
printf("Value of j = %d\n\n", *k);
printf("Value of k = %d\n\n", k);
int *U;
    int **ff = &U;
    printf("%u\n", ff);
    return 0;}