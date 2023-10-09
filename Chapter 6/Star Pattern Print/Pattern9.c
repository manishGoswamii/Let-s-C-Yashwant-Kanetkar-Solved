#include <stdio.h>
int main()
{ 
    for(int i =1; i<=4; i++)
    {  char Char = 'A';
        for(int j = 1; j<=7; j++)
    {
        if(j <= 5-i || j>= 3+i)
        {
        printf("%c", Char);
        }
        else printf(" ");
j >= 4 ? Char-- : Char ++;
    }
    
    printf("\n");
    }
    
    return 0;}
    /*
ABCDCBA
ABC CBA
AB   BA
A     A
*/