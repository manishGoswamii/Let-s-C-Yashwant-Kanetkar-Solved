#include <stdio.h>
void display (int);
void display2 (int *);
int main()
{
 int i ;
 int marks[] = {55,65,75,56,78,78,90};
 for(i = 0; i<=6; i++)
 {
     display(marks[i]);
 }
for(i =0 ; i<= 6; i++)
{
    display2(&marks[i]);
}

    return 0;
}
void display(int m)
{
    printf("m = %d\n", m);
}
void display2(int *n)
{
    printf("Display2 = %d\n", *n);
}