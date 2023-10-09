#include <stdio.h>
int main()
{char Gender;
int Years_Of_Service;
char Qualification;
int Salary;

    printf("Enter your gender\n");
    scanf(" %c", &Gender);
    
    printf("Enter Year of Service\n\n");
    scanf(" %d", &Years_Of_Service);

    printf("Enter your qualification\n");
    scanf(" %c", &Qualification);

  

if(Gender == 'M' || Gender == 'm')
{ if(Years_Of_Service>=10 && (Qualification == 'P' || Qualification == 'p'))
  Salary = 15000;

  else if(Years_Of_Service >= 10 && (Qualification == 'G' || Qualification == 'g'))
  Salary = 10000;

  else if(Years_Of_Service <10 && (Qualification == 'P' || Qualification == 'p'))
  Salary = 10000;

  else if(Years_Of_Service < 10 && (Qualification == 'g' || Qualification == 'G'))
 Salary = 7000;


   }


else 
{if(Gender == 'F' || Gender == 'f')
{
if(Years_Of_Service >=10 && (Qualification == 'P' || Qualification == 'p'))
  Salary = 12000;

  else if(Years_Of_Service >= 10 && (Qualification == 'G' || Qualification == 'g'))
  Salary = 9000;

  else if(Years_Of_Service <10 && (Qualification == 'P' || Qualification == 'p'))
  Salary = 10000;

  else if(Years_Of_Service < 10 && (Qualification == 'g' || Qualification == 'G'))
 Salary = 6000;

}

else {printf("Out of Choice\n");
goto End;
}}

printf(" The Salary of candidate with Gender = %c\t Years Of Experience = %d\t Qualification = %c\n: Salary = %d\n",Gender, Years_Of_Service, Qualification, Salary );
    End:
    return 0;}