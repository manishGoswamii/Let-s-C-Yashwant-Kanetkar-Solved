#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10] = {54,87,63,21,87,9,3,234,4,36};
    int i,j, temp = 0;

for(i=0; i<10; i++)
{
    for(j=0; j<10-i; j++)
    {
        if(array[j] > array[j+1])
        {
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;

        }
    }
}

for(i=0; i<10; i++)
{
    printf("%d\t", array[i]);
}




    return 0;
}