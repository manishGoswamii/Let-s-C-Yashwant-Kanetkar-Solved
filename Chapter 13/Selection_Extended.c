#include <stdio.h>
#include <stdlib.h>
int Minimum_Value(int *,int , int );
int main()
{int num, *p;
printf("Enter the number of variables you want :\n");
scanf("%d", &num);

p = (int *)calloc(num, sizeof(int));

int i,j;
//Store values in the array
for(i=0; i<num; i++)
{
printf("Enter the value for array[%d]\n", i);
scanf("%d", &p[i]);
}
//Array display
printf("\n\n");

for(i=0; i<num; i++)
{
    printf("%d\t", p[i]);
}

//Selection Sort Code
int temp, min;
for(i=0; i<num;i++)
{
min = Minimum_Value(p,num,i);
temp = p[i];
p[i] = p[min];
p[min] = temp;
}

//Display of Selection Sorted Array:
printf("\n\n");

for(i= 0; i<num; i++)
printf("%d\t", p[i]);


    return 0;
}

int Minimum_Value(int *p, int num, int k)
{
int i , location = k;
for(i=k; i<num; i++)
{
   if(p[location]>p[i])
     location = i;
}

return location;
}