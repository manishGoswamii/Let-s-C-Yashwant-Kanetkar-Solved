#include <stdio.h>
struct book
{
char bookName[30];
float bookPrice;
int bookPages;
};


int main(void)
{
    struct book b1, b2, b3;

    printf("Enter the name, price, and number of pages for FIRST book\n");
    scanf("%s %f %d",b1.bookName, &b1.bookPrice, &b1.bookPages) ;

    fflush(stdin);

    printf("Enter the name, price, and number of pages for SECOND book\n");
    scanf("%s %f %d", b2.bookName, &b2.bookPrice, &b2.bookPages);

    fflush(stdin);

    printf("Enter the name, price, and number of pages for THIRD book\n");
    scanf("%s %f %d", b3.bookName, &b3.bookPrice, &b3.bookPages);

    printf("First Book : %s %f %d\n", b1.bookName, b1.bookPrice, b1.bookPages);
    
    printf("Second Book : %s %f %d\n", b2.bookName, b2.bookPrice, b2.bookPages);
    
    printf("Third Book : %s %f %d\n", b3.bookName, b3.bookPrice, b3.bookPages);

    return 0;
}