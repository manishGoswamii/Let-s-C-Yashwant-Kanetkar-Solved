#include <stdio.h>
int main(void)
{
    char s[] =  "No two viruses worki simultenously!";
    int i =0 ;
    while(s[i] != '\0')
    {
        printf("%c %c\n", s[i], *(s+i));
        printf("%c %C\n", i[s], *(i+s));
        i++;
    }
    return 0;
}