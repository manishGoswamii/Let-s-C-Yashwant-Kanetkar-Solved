
//Wrong Format //

#include <stdio.h>

#define Test char character; printf("Enter a character\n"); scanf("%c", &character); \
if(character >= 97 && character <= 122) printf("Small Letter\n"); \
else if(character >=65 && character <= 90) printf("Capital Letter\n"); \
else printf("Out of reach\n"); 

#define Test1(a) if(a >= 97 && a <= 122) printf("Small Letter\n"); \
else if(a >=65 && a <= 90) printf("Capital Letter\n"); \
else printf("Out of reach\n");   

int main()
{
    Test;
    printf("Enter a character to check\n");
    char charr;
    scanf(" %c", &charr);
    Test1(charr);
    return 0;
}