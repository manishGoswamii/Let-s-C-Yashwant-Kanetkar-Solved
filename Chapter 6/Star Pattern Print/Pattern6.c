#include <stdio.h>
int main()
{for(int i =1; i<=5; i++)
{int Flag = 1;
for(int j =1; j<=9; j++)
{
    
    if(j>= 6-i && j<= 4+i && Flag)
    {printf("*"); Flag = 0;}

else {printf(" ");Flag = 1;}

}
printf("\n");

}
    return 0;}
    /*
    *    
   * *   
  * * *  
 * * * * 
* * * * *
*/