#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char name[25];
    printf("Enter your name\n");
   // scanf("%s", &name);
    //printf("Your Name %s\n", name);
//Cannot print multiple text i.e, characters after a 'Space' are ignored or not stored and not displayed beacuse Scanf is not capable of doing that

char name2[25];
printf("Please enter your name again\n");
gets(name2);
puts("Hello ");
puts( name2);

char name3[25];
printf("Enter the name again please\n");
scanf(" %[^\n]s", name3);
printf("%s", name3);
    return 0;
}