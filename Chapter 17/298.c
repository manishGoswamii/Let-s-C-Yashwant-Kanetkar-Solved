#include <stdio.h>
struct emp
{
    int a;
    char ch;
    float s;

};
int main(void)
{   
    struct emp ep;
    printf("%u %u %u\n", &ep.a, &ep.ch, &ep.s);

    return 0;
}