#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int i = 0;
i++;
if(i<=5)
{
    printf("C adds wings to your thoughts\n");
    exit(0);
    main();
}

    return 0;
}