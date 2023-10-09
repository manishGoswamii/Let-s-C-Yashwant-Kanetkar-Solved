#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char name[] = "E";
    char name2[] = "Eren Jeager";
   int  i= 0;
   while(name[i] != '\0')
   {
       printf("%c", name[i]);
      
       i++;
   }
    printf("\n");
    printf("%d\n", sizeof(name2));
    printf("%d\n", sizeof(name));
    
    for(i= 0; i<sizeof(name2); i++)
    {
        printf("%c", name2[i]);
    }
    printf("\n");
    return 0;

}