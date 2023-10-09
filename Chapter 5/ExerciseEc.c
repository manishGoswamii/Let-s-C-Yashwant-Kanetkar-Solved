#include <stdio.h>
int main()
{int Total_Match = 21;

while(1)
{
int Pick;
int Computer_Pick;

printf("Pick 1, 2, 3, or 4 Matchstick\n\n");
scanf("%d", &Pick);


if(Pick >4 || Pick <1)
    continue;

Computer_Pick = 5 - Pick;

Total_Match = Total_Match - Pick - Computer_Pick;

if(Total_Match == 1) 
{
printf(" You Picked %d\t Computer Picked %d\n\n", Pick, Computer_Pick);
printf(" Only 1 Matchstick left, you lose\n\n");
break;}

 else {
 printf(" You Picked %d\t Computer Picked = %d\t Matches Remain = %d\n\n", Pick, Computer_Pick, Total_Match);
 }

}
    
    
    return 0;}