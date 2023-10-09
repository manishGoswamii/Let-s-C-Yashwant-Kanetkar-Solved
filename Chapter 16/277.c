#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char masterList[6][20] = {"king", "rocker","pauli", "goku","simon", "kiba"};
    int i ;
    char yourName[20];
    printf("Enter your name :\t");
    scanf("%[^\n]", &yourName);

    for(i= 0; i<=5; i++)
    {
        if(strcmp(&masterList[i][0], yourName) == 0)
        {
            printf("Welcome you can enter %s\n", yourName);
            return 0;
        }
        
    }
     printf("Sorry! You are not homie\n");
    return 0;
}