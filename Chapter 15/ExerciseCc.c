#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

void Check(char *);

void String_To_Int(char *);


int main(void)
{
    char creditCard[17];

    printf("Enter the Credit Card Number to check if it is a valid number nor not\n");

    scanf("%[^\n]", &creditCard);

    Check(creditCard);

    return 0;
}



void Check(char *ptr)
{



    if(strlen(ptr) != 16)
    {
        printf("Invalid Entery!\n\n");
        exit(EXIT_FAILURE);
    }



    else 
    {
        String_To_Int(ptr);
        int i;
        long int firstSum = 0;
        long int secondSum = 0;
        int temp = 0;
        for(i= 0;  i<16; i= i + 2)
        {   
            temp = (ptr[i]-48)*2;
            temp >= 10 ? (temp = abs(temp -9) ) : (temp = temp);
            firstSum = firstSum + temp;

        }

        for(i = 1; i<16; i = i+2)
        {   
            secondSum = secondSum + (ptr[i]-48);

        }
        


        long int finalSum = firstSum + secondSum;
    
    printf("First Sum = %d\t Second Sum =  %d\t Final SUm =  %d\n\n",firstSum, secondSum, finalSum);
        
        
        if( finalSum % 10 == 0)

        {
            printf("The Entered %s is a VALID \n\n", ptr);

        }

        else 
        
        printf("The Entered %s is NOT a valid \n",  ptr);

    }



    return ;
}





void String_To_Int(char *ptr)
{
    int i;
    long long int sum = 0; ;
    for(i = 0; i<10; i++)
    {
        if(!(ptr[i] >= 48 && ptr[i] <= 57))
    {   printf("The Number you entered must be in the numeric form, please enter a valid number\n");
        exit(EXIT_FAILURE);
    }
    else{

        for(i = 0; i<10; i++)
        {
            sum = sum*10 + (ptr[i]-48);
        }
    }

    }
    return;
}