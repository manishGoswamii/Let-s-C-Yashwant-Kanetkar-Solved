#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void String_To_Num(char *);
int main(void)
{
    char string[50];
    printf("Enter any numerical string :\t");
    scanf("%[^\n]", &string);

    String_To_Num(string);
    return 0;
}
void String_To_Num(char *ptr)
{

    int number = 0;
for(int i = 0; i<strlen(ptr); i++)
 {
    if(ptr[i] >=48 && ptr[i] <= 57 )
    number = number*10 + (ptr[i]-48);

 else 
 {
 printf("Invalid String\n");
 exit(EXIT_FAILURE);}
 
 }
 printf("The Number is %d\n", number);

 
 
    return ;
}