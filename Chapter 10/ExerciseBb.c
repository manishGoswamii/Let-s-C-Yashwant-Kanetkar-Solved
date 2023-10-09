#include <stdio.h>
int Add(int);
int main()
{
    printf("Enter number upto which you want the sum of natural numbers\n");
    int num;
    scanf("%d", &num);
    int addition = Add(num);
    printf("The addition of %d natural numbers is %d\n", num, addition);
    return 0;
}
int sum= 0;
int i = 1;
int Add(int num)
{
    if(num != 0)
    {
sum = sum + i;
i++;
num = num-1;
Add(num); 
    

    }
    else 
    return sum;
}