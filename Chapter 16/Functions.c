#include <stdio.h>
void Print(char []);
void Pointer_Print(char *);
int main(void)
{

    char array[] = "Floccinaucinihilipilification";
    Print(array);

    Pointer_Print(array);

    return 0;
}
void Print(char array[50])
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