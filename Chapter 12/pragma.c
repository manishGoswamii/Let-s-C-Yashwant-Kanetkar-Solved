#include <stdio.h>
void fun1 (void);
void fun2 (void);
void fun3 (void);

void  __attribute__((constructor)) fun1();
void __attribute__((constructor)) fun2();
void __attribute__((constructor)) fun3();

void __attribute__((destructor)) fun1();

void __attribute__((destructor)) fun2();
void __attribute__((destructor)) fun3();
int main()
{

printf("Inside Main\n");
fun1();
fun2();
fun3();
    return 0;
}
void fun1 (void)
{
    printf("Inside fun1\n");
}
void fun2 (void)
{
    printf("Inside fun2\n");
}
void fun3 (void)
{
    printf("Inside fun3\n");
}
