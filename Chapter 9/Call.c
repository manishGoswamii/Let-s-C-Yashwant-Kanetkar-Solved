#include <stdio.h>
void Swap(int *, int *);
int main(void)
{
    int Num1, Num2;
    printf("Enter two numbers\n");
    scanf("%d %d", &Num1, &Num2);
    Swap(&Num1, &Num2);
    printf(" Num1 = %d\t Num2 = %d\n", Num1, Num2);
    return 0;
}

void Swap(int *A, int *B)
{
int t;
t = *A;
*A = *B;
*B = t;

}