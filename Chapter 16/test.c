#include <stdio.h>
void Fun(char *);
int main()
{ char *array[] = {"I am the king","YOu are the queen","No new Friends"};

for(int i = 0; i<3; i++)
    Fun(*(array+ i));
    
    return 0;}
    
    void Fun(char *ptr)
    {
        printf("%s", ptr);
        return;
    }