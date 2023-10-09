//Wrong Fomat//

#include <stdio.h>

#define Test char character; printf("Enter letter\n"); scanf("%c", &character); \
if(character >= 65 && character <= 90) printf("Capital Letter\n"); \
else if(character >= 97 && character <= 122) printf("Small Letter\n"); \
else printf("Out of reach\n"); 

#define Test1(character) \
if(character >= 65 && character <= 90) printf("Capital Letter\n"); \
else if(character >=97 && character <= 122) printf("Small Letter\n"); \
else printf("Out of reach\n"); 
int main()
{
    Test;
    printf("Enter a character to check if it is a capital letter or not \n");
    char charr;
    scanf(" %c", &charr);
    Test1(charr);
    return 0;
}