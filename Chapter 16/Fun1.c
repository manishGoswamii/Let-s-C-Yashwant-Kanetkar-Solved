#include <stdio.h>
void Print(char []);
void Pointer_Print(char *);

int main(void)
{   
    char array1[20];
    printf("Enter any string, any means any!\n");

    scanf("%[^\n]", &array1);
    char array[] = "Good Morning";
    
    Print(array);

    Pointer_Print(array1);

    return 0;
}
void Print(char array[])
{
    for(int i = 0; array[i] != 0 ; i++)
    {   
        printf("%c\n", array[i]);

    }

}
void Pointer_Print(char *ptr)
{
    for(int i = 0; ptr[i] != 0; i++)
    {
        printf("%c\n", ptr[i]);
    }
}