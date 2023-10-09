#include <stdio.h>
#define Co

int main()
{
    #ifdef INTEL 
    printf("Yeah! It is defined\n");
    printf("Burh! Second Line\n");
    for(int i = 1; i<=10; i++)
    {
        printf("In the Loop %d times\n", i);
    }
    int k;
    printf("Enter a value for test, clearly a tomfoolery\n");
    scanf("%d", &k);
    printf("Result of delared variable %d \n", k+k);

#elif FD

#else
 printf("The Fuck\n");
printf("You");



    #endif 


    return 0;
}