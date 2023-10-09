#include <stdio.h>
#include <string.h>


struct yearofjoining
{
char date[10];
char month[10];
char year[10];
};

struct student 

{

char rollno[10];

char name[30];

char department[20];

char course[20];

struct yearofjoining yoj;


};




void Year(char *,struct student *);



int main(void)
{
   struct student students[450];

   char choice = 'y';
   
    int i = 0;

while(choice == 'y' || choice == 'Y')
{

    
    {
        printf("Enter the Roll No:\n");
        scanf("%s", students[i].rollno);

        fflush(stdin);

        printf("Enter the name\n");
        scanf("%[^\n]", students[i].name);

        fflush(stdin);

        printf("Enter the Deparment:\n");
        scanf("%s", students[i].department);

        printf("Enter the course:\n\n");
        scanf("%s", students[i].course);


        printf("Entere the Date of Joining :\n");
        printf("Enter the Day\n");
        scanf("%s", students[i].yoj.date);

        printf("Enter the month\n");
        scanf("%s", students[i].yoj.month);

        printf("Enter the year\n");
        scanf("%s", students[i].yoj.year);

    i++;
    }

    printf("Do you want to insert more students' data??\n");
    scanf(" %c", &choice);



}


char yearToSearch[10];

printf("Enter the year to print the list of names of the students who joined in that particular year!\n\n");


scanf("%s", yearToSearch);

Year(yearToSearch, &students);


    return 0;

}

void Year(char *ptr1, struct student *ptr2)
{
    int i = 0;
    for(i = 0; i<20; i++)
    {
        if(strcmp(ptr1, ptr2[i].yoj.year) == 0)
        {
            printf("Name : %s\t Year Of Joining = %s\n", ptr2[i].name, ptr2[i].yoj.year);
            continue;
        }
    }
    
    return;

}