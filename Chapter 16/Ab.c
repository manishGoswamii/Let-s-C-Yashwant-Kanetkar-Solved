#include <stdio.h>
#include <string.h>
void Delete(char*);
int main(void)
{
    char sen[80];
    printf("Enter any senetence to remove vowels from it:\n");
    scanf("%[^\n]", sen);
    Delete(sen);
 printf("Edited String %s\n", sen);
    return 0;;

}
void Delete(char *ptr)
{
int len = strlen(ptr);
for(int i = 0; i<= len; i++)
{
    if(ptr[i] == 'A'|| ptr[i] == 'I'|| ptr[i] == 'E'|| ptr[i] == 'O'||ptr[i] == 'U'||ptr[i] == 'a'||ptr[i] == 'e'|| ptr[i] == 'i' || ptr[i] == 'o' || ptr[i] == 'u')
    {
        ptr[i] = ' ';
    } 
}

}