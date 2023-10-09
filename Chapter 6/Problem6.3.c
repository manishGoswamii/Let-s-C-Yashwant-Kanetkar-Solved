#include <stdio.h>
int main()
{int count =0;
for(int i =1; i<= 3; i++)
{for(int j = 1; j<=3; j++)
{for(int k = 1; k<=3; k++)
{printf("%d\t %d\t %d\t\n", i,j,k);
count++;
}


}

}
printf("%d\n", count);
    return 0;}