#include <stdio.h>
int main()
{
    int First_Year, Last_Year;
printf("Enter the years to check Leap Years between them\n");
scanf("%d %d", &First_Year, &Last_Year);

for(int i =  First_Year; i<=Last_Year; i++)
{
if(i % 100 == 0)
{if(i % 400==0)
   printf("%d is a Leap Year\n", i);
}
else {if(i %4 == 0)
printf("%d is a Leap Year\n", i);

}
}   
    return 0;}