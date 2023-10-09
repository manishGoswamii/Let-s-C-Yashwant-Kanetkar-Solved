#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2 


struct bank
{
char accountNumber[20];
char name[30];
float balance;
};

struct bank customers[N];

void Insert_Values(void);
void Display_Values(void);
void Withdrawl_Or_Deposit(void);
void Balance(void);


int main(void)
{


char choice = 'y';



while(choice == 'y' || choice == 'Y')
{
int options;

printf(" 1 - for Customer Data Insertion!\n\n 2 - to Display Customers Data!\n\n 3 - For the names of customers having balance less than 100 Rupees\n\n 4- To Withdral or Deposit Function!\n\n" );

scanf("%d", &options);

fflush(stdin);

switch(options)
{
    case 1 : Insert_Values();
    break;
    case 2 : Display_Values();
    break;
    case 3: Balance();
    break;
    case 4: Withdrawl_Or_Deposit();
    break;
    default : 
    {printf("Out of Choices\n");
    exit(0);
    }

}


printf("\n\n Y/y to continue. Or N/n to exit.\n\n");
scanf(" %c", &choice);

}


    return 0 ;
}


void Insert_Values(void)
{
    for(int i = 0; i< N; i++)
    {
        printf("Values for %d Customer\n\n", i+1);
        

        printf("Enter the Account Number:\n");
        scanf("%[^\n]", customers[i].accountNumber);

        fflush(stdin);
        
        printf("Enter Name:\n");
        scanf("%[^\n]", customers[i].name);

        fflush(stdin);

        printf("Enter balance:\n");
        scanf("%f", &customers[i].balance);

        fflush(stdin);

    }

    return;
}



void Display_Values(void)
{
    for(int i = 0; i< N; i++)
    {
        printf("\n\n Name : %s \n\n", customers[i].name);
        printf("\n\n Balance : %f \n\n", customers[i].balance);
        printf("\n\n Account Number : %s \n\n", customers[i].accountNumber);
    }


    return;
}


void Balance(void)
{   
    int i ;

    for(i= 0; i<N; i++)
    {
        if(customers[i].balance < 100 )
        {
            printf("Name : %s\n", customers[i].name);
            printf("Account Number : %s\n", customers[i].accountNumber);
    
        }
    
    }


    return;
}


void Withdrawl_Or_Deposit(void)
{
int choice;
printf("\n\n 5 - To Deposit\n\n 6- To Withdraw!\n\n");
scanf("%d", &choice);

            int i, j = 0;
            char accountNumber[10];
            float amount;

if(choice == 5)
    {
        
            printf("Enter Account Number:\t");
            scanf("%s",accountNumber);

            printf("Amount to Deposit:\t");
            scanf("%f", &amount);

           for(i= 0; i<N; i++)
           {
                if(strcmp(customers[i].accountNumber, accountNumber)==0)
                {
                    customers[i].balance = customers[i].balance + amount;
                    printf("\n\nAmount Successfully Credited!\n\n");
                        j++;
                }
                
           }

           (j==0) ? printf("Account Number does NOT exist in Database!\n\n") : 1;
    }


else if(choice==6)
{
    
            printf("\n Enter Account Number:\t");
            scanf("%s",accountNumber);

            printf("\n Amount to Withdraw!:\t");
            scanf("%f", &amount);

            for(i=0; i<N; i++)
            {

                if(strcmp(customers[i].accountNumber, accountNumber)==0 && customers[i].balance-amount >= 100)
                {   
                    customers[i].balance = customers[i].balance - amount;
                    printf("\n\n Debited Successfully!\n\n");
                    return;
                }
                else if(strcmp(customers[i].accountNumber, accountNumber)==0 && customers[i].balance-amount <= 100)
                {
                     printf("\n\n Cannot Perform Withdrawl as the balance falls below Base Amount(100 Rupees)!\n\n");
                    return;

                }


            }



}
    return;
}