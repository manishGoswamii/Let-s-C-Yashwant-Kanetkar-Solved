#include <stdio.h>
int main()
{for(int i =1; i<=4; i++)
{int Num =1;
    for(int j =1; j<=7; j++)
{
    if(j >= 5-i && j <= 3+i)
    {
    printf("%d", Num);
    j>=4 ? Num-- : Num++; 
    }else 
    printf(" ");



}
printf("\n");
}
    
    return 0;}

    /*
   1   
  121  
 12321 
1234321
*/