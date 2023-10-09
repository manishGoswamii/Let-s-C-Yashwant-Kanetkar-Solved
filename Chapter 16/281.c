#include <stdio.h>
int main(void)
{
    char name[20];
printf("Enter your name:\t");
scanf("%[^\n]", &name);
    return 0;
}