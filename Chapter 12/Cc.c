#include <stdio.h>
#define CAP(a) (a>=65 && a<=90 ? a+32 : 0)

int main()
{
printf("Enter an upper case letter of English Alphabet\n");
char alph;
scanf("%c", &alph);
char a = CAP(alph);
a>=97 && a<=122 ? printf("The Lower Case of %c is %c\n", alph, a) : printf("Out of the upper case alphabet letters\n");
    return 0;
}