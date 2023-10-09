#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{   
    char *array[] = {"Raj","Zain","Ammman","Amman", "Gambhir","Siddharth", "Sahil"};

    int i,j ;
    char *temp;

    for(i= 0; i<7; i++)
    {
        for(j = i; j<7; j++)
        {
            if(strcmp(array[i],array[j]) > 0)
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

for(i = 0; i<7; i++)
{
    printf("Arranged names = %s\n", array[i]);
}
    return 0;
}