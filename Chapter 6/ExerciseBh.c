#include <stdio.h>
int main()
{
    for(int i =1; i<=24; i++)
{   if(i<=11)
    printf("%d AM\n", i);

    else if(i==12)
    printf("%d Noon\n",i);

    else if(i < 24 )
    printf("%d PM\n", i-12);

    else if(i==24)
    printf("%d Midnight\n", i-12);
    }
    
    
    return 0;}