#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void Insert_Values(float *, float *, float *, int);
void Display_Array(float *, float *, float *, int);
float Largest_Value(float*, int);
void Display_Array2(float *, int);
void Area(float *, float *, float *, int);
int main()
{   int num;
float *ptr1, *ptr2, *ptr3;
    printf("Enter the number of triangular pieces of land whose area have to be calculated :\n");
    scanf("%d", &num);

    ptr1  = (float *)calloc(num, sizeof(float));
    ptr2  = (float *)calloc(num, sizeof(float));
    ptr3  = (float *)calloc(num, sizeof(float));
    
    Insert_Values(ptr1, ptr2, ptr3, num);
    
    Display_Array(ptr1, ptr2,ptr3,num);

    Area(ptr1, ptr2, ptr3, num);

    return 0;
}

void Insert_Values(float *ptr1, float *ptr2, float *ptr3, int num)
{ 
    int i,j;
   for(i = 0, j= 1; i <num ; i++, j++)
   {
      printf("Enter the value for %d Plot's\n", j); 

    printf("First Side :\n");
    scanf("%f", &ptr1[i]);

    printf("Second Side :\n");
    scanf("%f", &ptr2[i]);

    printf("Angle Given:\n");
    scanf("%f", &ptr3[i]);  
    
    }
   printf("\n\n");

   return ;
}


void Display_Array(float *ptr1, float *ptr2, float *ptr3, int num)
{
    for(int i = 0; i<num; i++)
    {
        printf("%f\t %f\t %f\n", ptr1[i], ptr2[i], ptr3[i]);
    }

    printf("\n\n\n");

    return ;
}



void Area(float *ptr1, float *ptr2, float *ptr3, int num)
{
float *ptr4;
ptr4 = (float *)calloc(num, sizeof(float));

for(int i = 0; i<num; i++)
{ 
    ptr4[i] = 0.5*ptr1[i]*ptr2[i]*sin(ptr3[i]);
}

Display_Array2(ptr4, num);

float largest = Largest_Value(ptr4, num); 
printf("The Largest is %f \n", largest);

}


float Largest_Value(float *ptr, int num)
{ int i;
  float largest = ptr[0];
    for(i = 0; i< num; i++)
    {
        if(largest<ptr[i])
        {
            largest = ptr[i];
        }
    }

    return largest;
}

void Display_Array2(float *ptr, int num)
{
    for(int i = 0; i<num; i++)
    {
        printf("%f\t", ptr[i]);
    }

    printf("\n\n\n");

    return ;
}
