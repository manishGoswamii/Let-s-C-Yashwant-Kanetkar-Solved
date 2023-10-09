#include <stdio.h>
struct book
{
char name[30];
char author[30];
int pages;
};
void Display1(char *, char *, int);
void Display2(struct book);
void Display3(struct book *);

int main(void)
{   
    struct book b1 = {"Let's C", " YPK", 643};
    Display1(b1.name, b1.author, b1.pages);
    Display2(b1);
    Display3(&b1);

    return 0;
}

void Display1(char *n, char *a, int pg)
{
    printf("%s %s %d\n", n, a, pg);
    return;
}

void Display2(struct book b)
{
    printf(" Second Display : %s %s %d\n", b.name, b.author, b.pages);
    return;
}

void Display3(struct book *ptr)
{
    printf("%s %s %d\n", ptr -> name, ptr -> author, ptr -> pages );
    return;
}
e3dc 