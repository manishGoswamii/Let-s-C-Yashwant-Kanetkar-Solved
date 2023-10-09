#include <stdio.h>
int main(void)
{
    char s[] = "Get Organised! Learn C!";
    printf("%s\n", &s[2]);
    printf("%s\n", s);
    printf("%s\n", s);
    printf("%s\n", &s);
    printf("%c\n", s[2]);
    return 0;
}