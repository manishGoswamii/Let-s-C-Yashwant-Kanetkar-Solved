#include <stdio.h>
struct book
{
char bookName;

float bookPrice;

int bookPages;

char array[10];
};

int main(void)
{
    struct book b1  =  {'A', 110.0, 230, "Name"};
    printf("Address of name = %u\n", &b1.bookName);
    printf("Address of price %u\n", &b1.bookPrice);
    printf("Address of pages = %u\n", &b1.bookPages);
    printf("Address of Array %u\n", b1.array);

    return 0;
}