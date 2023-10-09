#include <stdio.h>
void Print(char [][20]);
void Pointer_Print(char (*)[]);

int main(void)
{
    char array[][20] ={ "V for Vendata", "Villagers", "Hemllo"};

    Print(array);

      Pointer_Print(array);

    return 0;

}
void Print(char ptr[][20])
{   printf("Inside The Normal\n");
    for(int i = 0; i < 3; i++)
    {
    printf("%s\n", &ptr[i][0]);
    
    }
    return ;
}



void Pointer_Print(char (*ptr)[20])
{   printf("Inside the pointer function\n");
    for(int i =0 ; i<3; i++)
    {
    printf("%s\n", &ptr[i][0]);
    }
    return ;
}