#include <stdio.h>
int main()
{
int Class;
int Subjects_Failed;
int Grace_Marks;
printf("Enter the class\n");
printf("Enter the Subjects Failed in\n");

scanf("%d", &Class);
scanf("%d", &Subjects_Failed);

switch (Class)
{
case 1 : 
if(Subjects_Failed > 3)
Grace_Marks = 0;
else 
Grace_Marks = Subjects_Failed*5;
break;

case 2 :
if(Subjects_Failed>2)
Grace_Marks = 0;
else 
Grace_Marks = Subjects_Failed*4;
break;
case 3 :
if(Subjects_Failed  > 1)
Grace_Marks = 0;
else Grace_Marks =   Subjects_Failed*5;

default : printf("Out of class\n");
}
printf(" Student got %d class and Subjects failed = %d\t So the Grace Marks  = %d\n", Class, Subjects_Failed, Grace_Marks);
    
    return 0;}