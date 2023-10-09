#include<stdio.h>

#define N 5



struct students {
  int rlnm;
  char name[25];
  char dept[25];  /* structure defined outside of main(); */
  char course[25];
  int year;
  };

int dispyr(struct students (*)[]);
int disprl(struct students (*)[]);



void main() 
{           

struct students s[N];
int i,ch;





for(i=0;i<N;i++) {

printf("  Enter data of student %d\t\t\t\ttotal students: %d\n",i+1,N);
printf("****************************\n\n");

printf("enter rollnumber:  ");
scanf("%d",&s[i].rlnm);

printf("\n\nenter name:  ");
scanf(" %s",&s[i].name);

printf("\n\nenter department:  ");
scanf("%s",&s[i].dept);

printf("\n\nenter course:  ");
scanf("%s",&s[i].course);

printf("\n\nenter year of joining:  ");
scanf("%d",&s[i].year);


}

  /* displaying a menu */

printf("\n\tEnter your choice: \n");
printf("\t**********************\n\n");

printf("1: enter year to search all students who took admission in that:\n\n");
printf("2: enter roll number to see details of that student\n\n\n");

printf("your choice:  ");     /* taking input of your choice */
scanf("%d",&ch);


switch(ch) {

case 1:
     dispyr(&s);  /* function call to display names of students who joined in\
       a particular year */

     break;

case 2:
     disprl(&s);    /* function call to display information of a student \
         whose roll number is given */

     break;

default:

     printf("\n\nerror! wrong choice");

}


}







/******************* main() ends **************/

int dispyr(struct students (*a)[])
 {   /* function for displaying names of students\
        who took admission in a particular year */

int j,yr;

printf("\nenter year:  ");
scanf("%d",&yr);

printf("\n\nthese students joined in %d\n\n",yr);

for(j=0;j<N;j++) {

if(a[j].year==yr)  {

printf("\n%s\n",a[j].name);
}

}
return 0;
}


int disprl(struct students (*a)[]) {        /* function to print information of a\
         student whose roll number has been \
         given. */

int k,rl;

printf("\nenter roll number: ");
scanf("%d",&rl);

for(k=0;k<N;k++)  {

if(a[k].rlnm==rl) {

printf("\n\n\t Details of roll number: %d\n",a[k].rlnm);
printf("\t***************************\n\n");
printf("           Name: %s\n",a[k].name);
printf("     Department: %s\n",a[k].dept);
printf("         Course: %s\n",a[k].course);
printf("Year of joining: %d",a[k].year);

break;
}

else {
printf("\nRoll number you entered does not exist\n\n");

break;
}

 }

return 0;
}