#include <stdio.h>
void Shift(int *, int *, int *);
int main(void)
{
    int A,B,C;
    printf("Enter value of A\n");
    scanf("%d", &A);
    printf("Enter value of B\n");
    scanf("%d",&B);
    printf("Enter value of C\n");
    scanf("%d" ,&C);
    Shift(&A, &B, &C);
    printf(" A = %d\t B = %d\t C = %d\n", A, B ,C);
    
    return 0;}
    void Shift(int*A,int *B,int *C)
    {
    int Temp = *A;
    *A = *C;
    *C = *B;
    *B = Temp;
    return;

    }