#include <stdio.h>
int main()
{char Character;
printf("Enter any charcter\n");
scanf(" %c", &Character);

if(Character >=65 && Character <=90)
printf("Capital Letter\n");

else if(Character >=97 && Character <= 122)
printf("Small Letter\n");

else if(Character >= 48 && Character <=57)
printf("Digit\n");

else if((Character >= 0 && Character <= 47) || (Character >= 58 && Character <= 64) || (Character >=91 && Character <= 96) || (Character >= 123 && Character <= 127))
printf("Special Character\n");

    return 0;}