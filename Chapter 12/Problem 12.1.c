
#include <stdio.h>

#define UPPER(a) ((a>=65 && a<=90) ? 1 : 0)
#define LOWER(a) ((a>=97 && a<= 122) ? 1: 0)
#define NOTLETTER(a)((LOWER(a) || UPPER(a)) ? 1 : 0)
#define NUMBER(a) ((a>=48 && a<= 57)?  1 :0)
#define SPECIAL(a) (((a>= 1 && a<= 47) || (a>=58 && a<= 65) || (a>=91 && a<= 96)) ? 1 : 0)
#define BIGGER(a,b) (a>b?a:b)

int main()
{
    printf("Enter a charcter\n");
    char character;
    scanf("%c", &character);
    LOWER(character)? printf("Small Letter %c\n", character): 0;
    UPPER(character) ? printf("Upper Chacter\n") : 0; 
    NOTLETTER(character) ? printf("It is a Letter %c\n", character): 0;
    NUMBER(character) ? printf("It is a number Letter %c\n", character) : 0;
    SPECIAL(character)? printf("Special Letter %c\n", character): 0;

    printf("Enter two numbers to compare which one is greater between them\n");
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("The Greater number is %d\n",BIGGER(num1, num2));  
    return 0;
}