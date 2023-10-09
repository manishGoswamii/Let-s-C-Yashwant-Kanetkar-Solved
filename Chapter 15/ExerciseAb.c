#include <stdio.h>
int main(void)
{
    char s[100] = "Get Organised! Learn C!";
    printf("%s\n", &s[2]);
    printf("%s\n", s[2]);
    printf("%s\n", s);
    printf("%s\n", &s);
    printf("%c\n", s[2]);
    
    return 0;
}