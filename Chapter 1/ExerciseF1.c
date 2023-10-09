#include <stdio.h>
float Degree_Celsius_To_Fahrenheit (float num)
{float Fahrenheit = num*9/5 + 32;
return Fahrenheit;
}

float Fahrenheit_To_Degree_Celsius (float num)
{float Degree = (num - 32)*5/9;
return Degree;}

int main()
{char Choice;

printf(" Press C To Convert Temprature from Fahrenheit To Celsius \n Or \n Press F to coonvert Temprature from Celsius To Fahremheit\n");
scanf(" %c", &Choice);

if(Choice == 'F' || Choice == 'f')
{float Temprature;
printf("Enter the temprature (in Degrees)\n");
scanf("%f", &Temprature);

float Converted_Temprature = Degree_Celsius_To_Fahrenheit(Temprature);
printf("The Temprature %f%cC = %f%cF \n", Temprature,248, Converted_Temprature, 248);
}
else 
{if(Choice == 'c' || Choice == 'C')
{float Temprature;
printf("Enter the temprature (in Fahrenheit)\n");
scanf("%f", &Temprature);
float Converted_Temprature = Fahrenheit_To_Degree_Celsius(Temprature);
printf("The Temprature %f%cF = %f%cC\n", Temprature,248, Converted_Temprature, 248);
}
else printf("Input Out of Choice\n");
}
    return 0;}