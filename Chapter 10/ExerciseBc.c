#include <stdio.h>
void TOH(int, char, char, char);
int main()
{
    printf("Enter the number of plates\n");
    int num;
    scanf("%d", &num);
    
    TOH(num, 'A', 'B', 'C');
    return 0;
}
void TOH(int num, char start, char mid, char end)
{
    if(num>=1)
    {
    TOH(num-1, start, end, mid);
    printf("One Plate moved from %c to %c\n", start, end);
    TOH(num-1, mid, start, end);


    }

}