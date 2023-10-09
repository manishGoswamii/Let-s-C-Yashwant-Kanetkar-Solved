#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *p, i;
 int amount;
 printf("Enter the number of elements you want in the array, make sure to imput the even numbers : \n");
 scanf("%d", &amount);
 p = (int*)calloc(amount, sizeof(int));

 for(i =0; i < amount; i++) // taking input in the array:
 { 
     printf("Enter the value for array[%d]\n", i);
     scanf("%d", &p[i]);
 }

 printf("The array created by you : \n"); // Popup kida message:

for(i=0; i < amount; i++) // To display the array:
{
    printf("%d\t", p[i]);

}
printf("\n\n");
//code for data exchange:

int temp = 0;
for( i = 0; i < amount; i = i+2 )
{
    temp = p[i];
    p[i] = p[i+1];
    p[i+1] = temp; 
}


//To print the new array:

for(i=0; i < amount; i++)
{
    printf("%d\t", p[i]);
}
    return 0;
}