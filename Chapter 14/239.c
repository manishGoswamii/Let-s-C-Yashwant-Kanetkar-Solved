#include <stdio.h>
#include <stdlib.h>
int main()
{
    int stud[4][2];
    int i,j;

    //Taking values as the input: Method 1
    /*
    for(i=0; i<4; i++)
    {
        printf("Enter the roll no and marks of the students \n");
        scanf("%d %d", &stud[i][0], stud[i][1]);
}
*/
//Method 2 : for inserting values in the array :

for(i=0; i<4; i++)
{
   
    
        printf("Enter the Roll No :\t");
        scanf("%d", &stud[i][0]);

        printf("Enter the marks of the student:\t");
        scanf("%d", &stud[i][1]);
    
}

for(i=0; i<4;i++)
{
    printf("Roll No : %d\t Marks = %d\n", stud[i][0], stud[i][1]);
}
    return 0;

}

