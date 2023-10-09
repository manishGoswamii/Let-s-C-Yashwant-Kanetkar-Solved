#include <stdio.h>
void fun();
int main()
{
    fun();
    fun();
        return 0;
}
void fun()
{
    auto int i = 0;
    register int j =0;
    static int k = 0;
    i++;
    j++;
    k++;
    printf(" i = %d\t j = %d\t k = %d\n", i,j,k);
}