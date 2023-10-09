#include <stdio.h>
int main()
{
for(int i =1; i<=4; i++)
{int Flag = 1;
  for(int j =1; j<=7; j++)
{ if(j >= 5-i && j <= 3+i && Flag)
      {
      printf("*");
      Flag = 0;}
    
      
      else {printf(" ");
      Flag =1;}
}
 printf("\n");


}
    
    return 0;}


    /*
   *   
  * *  
 * * * 
* * * *
   */ 