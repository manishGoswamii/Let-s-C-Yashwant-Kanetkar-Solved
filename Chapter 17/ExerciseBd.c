#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5

struct cricketers
{
    char name[20];
    int age;
    int matches;
    float average;

};

struct cricketers crick[N];

void Insert_Values(void);
void Display_Values(void);
void Arrange(void);
void Arrange_Average(void);



int main(void)
{   
    char des = 'y';
    
    while(des == 'y' || des == 'Y')
    {

    int choice;
    printf("\n\n 1 - To Insert Cricketer Data!\n\n 2- To Display Cricketers Database!\n\n 3 - To Arrange Them on average of runs!\n\n\n");
    scanf("%d", &choice);



switch(choice)
{

case 1 :    Insert_Values();
        break;

case 2 :    Display_Values();
        break;
case 3 :    Arrange();
        break;
default : 
    { printf("\n\nOut Of Choice\n\n");
    exit(EXIT_FAILURE);

    }

}

printf("\n\n Y/y to continue the application!\n\n N/n to exit!\n\n");
scanf(" %c", &des);

}


    return 0;
}

void Insert_Values(void)
{
    int i ;
    for(i = 0; i<N; i++)
    {   
        printf("\n Values for %d player:\n\n", i+1);
        printf("Name:\t");

        fflush(stdin);
        scanf("%[^\n]", crick[i].name);

        fflush(stdin);

        printf("Age :\t");
        scanf("%d", &crick[i].age);

        printf("Matches Played! : \t");
        scanf("%d", &crick[i].matches);
        
        printf("Average Runs : \t");
        scanf("%f", &crick[i].average);

    }

    return;
}

void Display_Values(void)
{
    int i ;
    for(i= 0; i<N; i++)
    {
        printf("\n\n%d Player :\n\n", i+1);
        printf(" Name = %s\n\n", crick[i].name);
        printf(" Age = %d\n\n", crick[i].age);
        printf(" Matches Played = %d\n\n", crick[i].matches);
        printf(" Average Runs Obtained : %f \n\n", crick[i].average);
    }
    return;
}




void Arrange(void)
{   
    char des = 'y';

    while(des == 'y' || des == 'Y')
{

    int choicebyUser;
    printf("\n\n\n Arrange:\n 1 - Name.\n\n 2 - Age.\n 3 - Matches Played.\n 4 - Average Runs.\n\n\n ");
    scanf("%d", &choicebyUser);

    
    switch(choicebyUser)
    {
        //case 1 : Arrange_Name();
        //break;

        //case 2: Arrange_Age();
       // break;

        //case 3 : Arrange_Matches_Played();
       // break;

        case 4 : Arrange_Average();
        break;

        default :
        {
            printf("\n\n\n Out of choice availabe!\n\n ");
            exit(EXIT_FAILURE);
        }
    }


    printf("\n\n\n Y/y to arrange more!\n\n\n N/n t0 exit!\n\n\n");
  
    scanf(" %c", &des);

 }

    return;
}

void Arrange_Average(void)
{
    
    return;
}