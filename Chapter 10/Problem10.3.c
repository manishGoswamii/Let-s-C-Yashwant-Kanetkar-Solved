#include <stdio.h>
void Series(int, int, int);
int main(void)
{int n;
printf("Enter the term upto which you want to print the fibonacci series\n");
scanf("%d", &n);
    printf("%d\t %d\t", 1,1);
    Series(n, 1, 1);
    
    return 0;}

    void Series (int n, int a, int b)
{
if(n>0)
{
int new_term = a + b;
printf("%d\t", new_term);
n--;
b = a;
a = new_term;

Series(n,a, b);

}
        return;
    }