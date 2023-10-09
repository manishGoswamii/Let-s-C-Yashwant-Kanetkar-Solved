#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


long long int Check_The_Digit(char *);
void Check_The_Credit_Number( long long int);


int main(void)
{
    char creditNumber[17];

    printf("Enter the Credit Card Number to check if it is a VALID Number or NOT\n\n");

    scanf("%[^\n]", &creditNumber);

long long int number  = Check_The_Digit(creditNumber);

Check_The_Credit_Number(number);

    return 0;
}





long long int Check_The_Digit(char *ptr)
{
    if(strlen(ptr) != 16)
    {
        printf("Invalid Credit Card Number! Try Again\n");
        exit(EXIT_FAILURE);
    }
    else 
    {
        int i;
        long long int sum  = 0 ;
        for(i = 0; i<16; i++)
        {   
            if(!(ptr[i]>= 48 && ptr[i] <=57))
                {
                    printf("Invalid Set of Characters! Try Again!\n\n");
                    exit(EXIT_FAILURE);
                }
        }

    for(i = 0; i<16; i++)
    {
        sum  =   sum*10 + (ptr[i] - 48);

    }
    
    printf("\n\n Number   = %lld\n\n", sum);


    return sum;
    }


}



void Check_The_Credit_Number(long long int num)
{

int i;
int firstSum = 0; 
long long int firstTemp = num;

for(i = 1; i<=8 ; i++)

{   
    firstTemp = firstTemp/10;

    int temp = 2*( firstTemp % 10);

    (temp >= 10) ? (temp = abs(temp - 9)) : (temp = temp);

    firstSum  = firstSum +  temp;
    
    printf("Every FirstSum = %d\n", firstSum);
    firstTemp = firstTemp/10;

}

int secondSum  = 0;
long long int secondTemp = num;

for(i= 1; i<=8; i++)
{
    secondSum  = secondSum + secondTemp%10;
    secondTemp = secondTemp/100;
}
int finalSum = firstSum + secondSum;

printf("First Sum = %d\t Second SUm = %d\t Final Sum = %d\n", firstSum, secondSum, finalSum);
if((firstSum + secondSum) % 10 == 0)
{
    printf("The Entred credit Card Number: %lld is a valid card number\n\n", num);
}

else printf("The Entered Credit Card Number: %lld is NOT a valid Card Number\n\n ", num);

return ;
}







