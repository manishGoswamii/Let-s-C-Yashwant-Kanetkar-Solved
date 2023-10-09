#include <stdio.h>
void RUN();
void run();
int main()
{
    extern int in ;

printf("This is Main's in %d \n", in);
run();
RUN();

    return 0;
}
 static int in  = 5;
void run(void)
{
extern int in;
in++;
printf("Run in = %d\n", ++in);
    
}
void RUN(void)
{
    in++;
    printf("RUN in = %d\n", in);
}