#include <stdio.h>
#include <math.h>
int main()
{int count = 0;
    for(int i =1; i<=100; i++)
{for(int j =i; j<=100; j++)
{float Greatest;
 float Sum_Of_Squares;
    
    
    for(int k =j; k<=100; k++)
{if(i>j)
{if(i>k) 
{Greatest = i;
Sum_Of_Squares = sqrt(j*j + k*k);}

else
{ Greatest = k;
Sum_Of_Squares = sqrt(j*j + i*i);
} 
 }
else 
{if(j>k)
 {Greatest = j;
 Sum_Of_Squares = sqrt(i*i + k*k);}
 
 else {Greatest = k;
 Sum_Of_Squares = sqrt(j*j + i*i);
 }}
 if(Greatest == Sum_Of_Squares)
 {printf("The Pythagorean Triplet:\n i = %d\t j = %d\t k = %d\n\n\n", i,j,k);
count++;}}
}
}
    printf("Count = %d\n", count);    return 0;}