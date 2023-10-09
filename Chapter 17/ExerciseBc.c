#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5

struct engine
{
    char sNumber[10];
    char yearOfManufaacture[5];
    char material[20];
    char quantity[10];

};
struct engine serialNumbers[N];

void Display(void);
void Insert_Values(void);
void Retrieve(void);

int main(void)
{


char des = 'y';
while(des == 'y' || des == 'Y')
{
int choice;
printf("\n\n\nWelcome To MG Gears!\n\n\n");
printf(" 1- To Add New Serial Numbers!\n 2- To View All Serial Numbers\n 3- To Retrive certain Identity Serial Numbers!\n\n\n ");
scanf("%d", &choice);
switch(choice)
    {
 case 1 : Insert_Values();
 break;
case 2 : Display();
break;
case 3 : Retrieve();
break;
default: 
{
    printf("Out Of Choice!");
    exit(EXIT_FAILURE);
}
   
    }

    printf("\n\n\nY/y to continue the application! N/n to exit!\n\n\n");
    scanf(" %c", &des);
}



      return 0;
}



void Insert_Values(void)
{
    int i ;
    for(i =0; i<N; i++)
    {   
        printf("Values for %d number : \n", i+1);
        printf("Enter the Indentification Code:\t");
        fflush(stdin);
        scanf("%[^\n]", serialNumbers[i].sNumber);
        fflush(stdin);

        printf("Enter the Year manufactured : \t");
        scanf("%{[^\n]", serialNumbers[i].yearOfManufaacture);
        fflush(stdin);

        printf("Enter the MATERIAL used:\t");
        scanf("%[^\n]", serialNumbers[i].material);
        fflush(stdin);

        printf("Enter the QUANTITY manufactured:\t");
        scanf("%[^\n]", serialNumbers[i].quantity);
        fflush(stdin);

    }

    return;

}

void Display(void)
{
    int i ;
    for(i= 0; i<N; i++)
    {
        printf(" Serial Number %d \t = %s%s%s%s\n",i+1,serialNumbers[i].sNumber, serialNumbers[i].yearOfManufaacture, serialNumbers[i].material, serialNumbers[i].quantity );
    }


    return;

}


void Retrieve(void)
{
int i ,j;
char firstNumber[5];
char secondNumber[5];
printf("Enter the first Identification Number!\n");
scanf("%s", firstNumber);

printf("Enter the second Identification Number!\n");
scanf("%s", secondNumber);

for(i= 0; i<N; i++)
{       
    
        if(strcmp(firstNumber, serialNumbers[i].sNumber)==0)
        {                       
                j = i;

            while(strcmp(secondNumber, serialNumbers[j].sNumber) != 0)
            {
                printf(" Serial Number \t = %s%s%s%s\n",serialNumbers[j].sNumber, serialNumbers[j].yearOfManufaacture, serialNumbers[j].material, serialNumbers[j].quantity );
                j++;
            }
            printf(" Serial Number  = %s%s%s%s\n",serialNumbers[j].sNumber, serialNumbers[j].yearOfManufaacture, serialNumbers[j].material, serialNumbers[j].quantity );
        }

}

    return;
}