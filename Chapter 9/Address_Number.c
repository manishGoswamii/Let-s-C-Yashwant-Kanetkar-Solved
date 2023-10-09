#include <stdio.h>
int main()
{ int i = 9;
 char *chr;
float *flo;
int *in;
printf("%d %d %d\n", sizeof(chr), sizeof(flo), sizeof(in));
 printf("%u\n", i);
 
    printf("%d\n", i);
    printf("%u\n", &i);
    printf("%u\n", *&i);

    int *x = &i;
    printf("%d\n", x);
    return 0;
}