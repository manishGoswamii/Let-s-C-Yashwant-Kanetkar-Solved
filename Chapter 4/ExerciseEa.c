#include <stdio.h>
//1

int main()
{char Letter;
printf("Enter any charcter to check if it is a Capital Letter or Small Letter\n");
scanf(" %c", &Letter);

Letter >= 65 && Letter <= 90 ? printf("Capital Letter\n") :  ((Letter >= 97 && Letter <=122) ? printf("Small Letter\n") :
 printf("Special Letter\n"));    
    return 0;}
  
//2
int main()
{char Letter;

printf("Enter any charcter to check if it is a Special Letter or not\n");
scanf(" %c", &Letter);

((Letter >= 1 && Letter <= 47) || (Letter >= 58 && Letter <=64) || (Letter >= 91 && Letter <=96) || ( Letter >= 122 && Letter <= 127))  ? printf("Special Letter\n") :  
printf("Not a special symbol\n");  
   
return 0;

}