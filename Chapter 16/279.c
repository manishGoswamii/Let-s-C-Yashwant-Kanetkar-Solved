#include <stdio.h>
int main(void)
{
    char *ptr = "franx kafka";
    char *ptr2[]=
     {
        "Metamorphosis",
        "To kill a mocking bird",
        "The Chalk Man",
        "Intelligent Investigator"
                                    };
    
    char *ptr3 = "Delta";
    char *ptr4 = "King Paimon";
    char *ptr5  = "Thunder";
    char *ptr6 = "To Live is to give life it's meaning";

    char *ptr7[] = 
    {ptr3, ptr4, ptr5, ptr6};
int i , j;

    for(i= 0; i<4; i++)
    {
        printf("%s\n\n", ptr2[i]);
    }

    for(i= 0; i<4; i++)
    {
        printf("%s\n\n", ptr7[i]);
    }
    return 0;
}