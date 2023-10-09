#include <stdio.h>
float Degree_To_Fahrenheit (float num)
{float Fahrenheit = num*9/5 + 32;
return Fahrenheit;
}

float Fahrenheit_To_Degree (float num)
{float Degree = (num - 32)*5/9;
return Degree;}

int main()
{char Choice;

printf("Press F To Convert Temprature from Degrees To Fahrenheit\n Or Press D to coonvert Temprate from Fahremheit to Degrees\n");
scanf(" %c", &Choice);

if(Choice == 'F' || Choice == 'f')
{float Temprature;
printf("Enter the temprature (in Degrees)\n");
scanf("%f", &Temprature);
float Converted_Temprature = Degree_To_Fahrenheit(Temprature);
printf("The Temprature %f(in Degrees) = %f Fahrenheit\n", Temprature, Converted_Temprature);
}


else {if(Choice == 'd' || Choice == 'D')
{float Temprature;
printf("Enter the temprature (in Fahrenheit)\n");
scanf("%f", &Temprature);
float Converted_Temprature = Fahrenheit_To_Degree(Temprature);
printf("The Temprature %f(in Fahrenheit) = %f Degrees\n", Temprature, Converted_Temprature);
}
else printf("Input Out of Choice\n");
}
    return 0;}