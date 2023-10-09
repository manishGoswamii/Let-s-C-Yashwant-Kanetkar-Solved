#include <stdio.h>
#include <stdlib.h>
int main()
{int goals;
printf("Enter the number of goals\n");
scanf("%d", &goals);

if(goals <= 5)
goto sos;

else {printf("Jumped\n");

exit(EXIT_SUCCESS);}
    sos :
    printf("Label Print\n");
    return 0;}
