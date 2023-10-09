#include <stdlib.h>
#include <stdio.h>
int main()
{
printf("Size of int %d\n", sizeof(int));
printf("Size of float %d\n", sizeof(float));
printf("Size of char %d\n", sizeof(char));
printf("Size of short %d\n", sizeof(short));
printf("Size of long %d\n", sizeof(long));
printf("Size of double %d\n", sizeof(double));
printf("Size of int long %d\n", sizeof(int long));
printf("Size of long int %d\n", sizeof(long int));
printf("Size of long double %d\n", sizeof(long double));
printf("Size of doube long %d\n", sizeof(double long));
printf("Size of long float %d\n", sizeof('A'));

return EXIT_SUCCESS;}