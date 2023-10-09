#include <stdio.h>


int main(void)
{
    char name[6][20] = {"akshay", "parag", "raman", "srinivas", "gopal", "rajesh"};

    char *names[] = {"akshay", "parag", "raman", "srinivas", "gopal", "rajesh"};



int i , j ;
printf("The Original Strings\n\n");


for(i = 0; i<6; i++)
{
    printf("%s\n\n", &name[i][0]);
}

char temp;

printf("\n\n After the Operation\n\n");
for(i = 0 ; name[2][i] != 0 || name[3][i] != 0; i++)
{   temp = name[2][i];
    name[2][i] = name[3][i];
    name[3][i] = temp;
}

for(i = 0; i<6; i++)
{
    printf("%s\n\n", &name[i][0]);
}

printf("\n\n\n\nThrough Pointers\n\n");
char *temp2;
for(i= 0 ; i<1; i++)
{   
    temp2 =  names[2];
    names[2] = names[3];
    names[3] = temp2;

}
for(i = 0; i<6; i++)
{
    printf("%s\n\n", names[i]);
}




    return 0;
}
