#include <stdio.h>
#include <math.h>
int main()
{int x1, x2, x3, y1, y2, y3;
printf("Enter the first two coordinates\n");
scanf("%d %d", &x1, &y1);
printf("Enter the second two coordinates\n");
scanf("%d %d", &x2, &y2);
printf("Enter the third two coordinates\n");
scanf("%d %d", &x3, &y3);

double ab, bc, ac;
ab = sqrt(pow(y2-y1, 2) + pow(x2-x1, 2));
bc = sqrt(pow(y3-y2, 2) + pow(x3-x2, 2));
ac = sqrt(pow(y3-y1, 2) + pow(x3-x1, 2));

if(ab+bc == ac )
{printf("All the Coordinates lie on the same straight line\n");}

else printf("All the Coordinates does not lie on the same straight line\n");
    return 0;}