#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void Check_ISBN(char *);
int String_To_Int(char *);


int main(void)
{
    char isbnNumber[11];

    printf("Enter the ISBN Number to check if it is a valid number nor not\n");

    scanf("%[^\n]", &isbnNumber);

    Check_ISBN(isbnNumber);

    return 0;
}



void Check_ISBN(char *ptr)
{



    if(strlen(ptr) != 10)
    {
        printf("Invalid Entery! Make sure you entered the number in standard format for ISBN Number\n\n");
        exit(EXIT_FAILURE);
    }



    else 
    {
        int number = String_To_Int(ptr);
        int i, sum = 0 ;
        int j;
        
        for(i= 1, j=2; i<10; i++, j++)
        {   
            sum  = sum + (j*ptr[i]);

        }

        long int finalSum = ptr[0] + sum;
         
    
        if( finalSum % 11 == 0)

        {
            printf("The Entered ISBN %s is a VALID ISBN\n\n", ptr);

        }

        else 
        
        printf("The Entered ISNB %s is NOT a valid ISBN\n", ptr);

    }



    return ;
}





int String_To_Int(char *ptr)
{
    int i, sum = 0; ;
    for(i = 0; i<10; i++)
    {
        if(!(ptr[i] >= 48 && ptr[i] <= 57))
    {   printf("The Number you entered must be in the numeric form, please enter a valid number\n");
        exit(EXIT_FAILURE);
    }
    else{

        for(i = 0; i<10; i++)
        {
            sum = sum*10 + ptr[i];
        }
    }

    }
    return sum;
}