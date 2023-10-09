#include <Stdio.h>
#include <stdlib.h>
int main(void)
{   int i , j;
    char yourName[6][20];
   for(i = 0; i<6; i++)
   {
           printf("Enter your name :\t");
           fflush(stdin);
           scanf("%[^\n]", &yourName[i][0]);
   }
  
   printf("The Name you entered:\n\n");
  
   for(j = 0; j < 6; j++)
    {    
       printf("%s\n\n", &yourName[j][0]);

   }

    return 0;
}