#include <stdio.h>

struct book
{   
    char bookName[30];
    float bookPrice;
    int bookPages;

};

int main(void)
{
struct book bookData[3];
int i, dh ;
for(i = 0; i<3; i++)
{
    printf("Enter the value for Name, Price, And Number of Pages for %d book:\n", i);
    scanf("%s %f %d", bookData[i].bookName, &bookData[i].bookPrice, &bookData[i].bookPages);
    //dh = getchar();
    //printf("%d", dh);
    while((dh=getchar()) != '\n');
}
for(i = 0; i<3; i++)
{
    printf("Values for %d book\n", i+1);
    printf("%s %f %d\n", bookData[i].bookName, bookData[i].bookPrice, bookData[i].bookPages);
}
    return 0;

}