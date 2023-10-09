#include <stdio.h>
#include <string.h>
#define N 5
struct std
{

char rollNo[10];
char name[20];
char department[10];
char course[10];
char yearOfJoining[5];

};

struct std students[10];

void Insert_Values(void);
void Display_Values(void);
void Year(void);
void Data(void);

int main(void)
{
    Insert_Values();
    Display_Values();


    Year();
    Data();   
    return 0;
}

void Insert_Values(void)
{
    int i ;
    for(i=0; i<N; i++)
    {
    printf("Enter the Roll No for %d student\n", i+1);

    scanf("%[^\n]", students[i].rollNo);

    fflush(stdin);

    printf("Enter the Name for %d student\n", i+1);

    scanf("%[^\n]", students[i].name);

    fflush(stdin);

    printf("Enter the Department for %d student\n", i+1);

    scanf("%[^\n]", students[i].department);

    fflush(stdin);

    printf("Enter the Course for %d student\n", i+1);

    scanf("%[^\n]", students[i].course);

    fflush(stdin);

    printf("Enter the Year OF Joining for %d student\n", 1+i);

    scanf("%[^\n]", students[i].yearOfJoining);

    fflush(stdin);
    
    }
    
    return;
}


void Display_Values(void)
{
int i ;
for(i=0; i<N; i++)
{   
    printf("The Values for %d student :: \n\n\n",i);
    printf("Roll No :\t %s \n\n ", students[i].rollNo);

    printf("Name :\t %s \n\n ", students[i].name);

    printf("Department :\t %s \n\n ", students[i].department);

    printf("Course :\t %s \n\n ", students[i].course);

    printf("Year of Joining  :\t %s \n\n ", students[i].yearOfJoining);



}

    return;
}


void Year(void)
{
    char year[10];
    printf("Enter the year to search the students in that year\n");

    scanf("%[^\n]", year);
    
    fflush(stdin);

    int i;

    for(i=0; i<N; i++)
    {
        if(strcmp(students[i].yearOfJoining, year) == 0)
        {
            printf("%s joined in %s\n", students[i].name, students[i].yearOfJoining);

        }
    }

    



    return;
}

void Data(void)
{
    char rollNo[30];
    printf("Enter the Roll No of the student to display his\\her data \n");
    scanf("%[^\n]", name);

    int i ;
    for(i=0; i<N; i++)
    {

        if(strcmp(students[i].rollNo, rollNo) == 0)
        {
            printf("Roll No :\t %s \n ", students[i].rollNo);

            printf("Name :\t %s \n ", students[i].name);

            printf("Department :\t %s \n ", students[i].department);

            printf("Course :\t %s \n ", students[i].course);

            printf("Year of Joining  :\t %s \n ", students[i].yearOfJoining);
           
        }
    }

    return;
}