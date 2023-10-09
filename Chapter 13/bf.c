#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Insert_Values(int *, int);
void Display_Array(int *, int);
float Mean(int *, int);
float Standard_Deviation(int *, int);
int main()
{
    printf("Entee the number of elements for Standard Deviation :\n");
    int num, *ptr;
    scanf("%d", &num);
    ptr = (int *)calloc(num, sizeof(int));

    Insert_Values(ptr, num);
    
    Display_Array(ptr, num);

    float sd = Standard_Deviation(ptr, num);
    
    printf("The Standard Devaition obtained from the below array is : %f\n", sd);

    Display_Array(ptr, num);



    return 0;
}

void Insert_Values(int *ptr, int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("Enter the value for Array[%d] :\n", i);
        scanf("%d", &ptr[i]);
    }
printf("\n\n");

return ;
}

void Display_Array(int *ptr, int num)
{
    for(int i =0 ; i< num; i++)
    {
        printf("%d\t", ptr[i]);
    }
    printf("\n\n");

return ;
}

float Standard_Deviation(int *ptr, int num)
{    
    float difference = 0;
    float mean = Mean(ptr, num);
    for(int i =0; i< num; i++)
    {
        difference = difference + pow((ptr[i] - mean), 2);
    }

    return sqrt(difference/(num-1));
}

float Mean(int *ptr, int num)
{  
    float mean = 0;
    float addition = 0;
   for(int i =0; i<num; i++)
   { 
      addition = addition + ptr[i];
   }
   mean = addition/num;
   
    return mean;
}