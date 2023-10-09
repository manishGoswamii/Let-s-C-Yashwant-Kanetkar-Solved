#include <stdio.h>


struct address
{
char phone[15];
char city[25];
int pin;
};

struct emp
{
char name[30];
int id;
struct address add;
};

int main(void)
{
    struct emp e1 = {"Jerry", 100, "9893456781", "Nagpur", 224410};
    printf("Name = %s, Phone = %s\n", e1.name, e1.add.phone);
    printf("City =  %s, Pin = %d\n", e1.add.city, e1.add.pin);
    return 0;
}