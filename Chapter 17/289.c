#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[3];
    float price[3];
    int pages[3];
    int i ;
    printf("Enter names, prices, and number of paages of 3 books\n");
   
    for(i = 0; i<3; i++)
    {   
        fflush(stdin);
        scanf("%c %f %d", &name[i], &price[i], &pages[i]);

 }
    printf("And this is what you entered\n");

    for(i=0; i<3;i++)
    {
        printf("%c %f %d\n", name[i], price[i], pages[i]);
    }
   
         return 0;
}