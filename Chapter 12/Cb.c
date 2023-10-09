#include <stdio.h>
#define ABSOL(a) ( a<0 ? -1*a : a)
int main()
    {
        printf("Enter a number to find the absolute of the number\n");
        int a;
        scanf("%d", &a);
        printf("The absolute of %d is %d\n",a,ABSOL(a));
        return 0;
    }