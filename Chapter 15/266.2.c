#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void xstrcat(char *, char*);
void cat(char*, char*);
int main(void)
{
    char name[30] = "Colossal Titan";
    char surname[30]= " Buslim";
    
    printf("\nTaraget String beforte cat = %s\n", name);
  //  cat(name, surname);
    xstrcat(name, surname);
printf("SOurce String = %s\n", surname);
printf("Target String = %s\n", name);

    return 0;
}




void xstrcat(char *target, char *source )
{   
    int i =  strlen(target);
printf("Lenght = %d\n", strlen(target));

printf("Lenght + 1 = %d\n", (1+ strlen(target)));

printf("Value of i = %d\n", i);

    while( *(source) != '\0' )
    {
        target[i] =  *source;
        printf("%c\n", target[i]);
        i++;
        source++;
    }
    target[i] = '\0';
    printf("%s\n", target);
    printf("Size of Colossal = %d\n", strlen(target));

    return;
}





void cat(char *target, char *source)
{
    while(*target != '\0' )
    {
        target++;
    }

    while(*source != '\0')
    {
        *target = *source;
        target++; source++;
    }

    *target = '\0';
    return ;
}