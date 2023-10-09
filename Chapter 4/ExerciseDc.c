#include <stdio.h>
int main()
{float Hardness, Carbon_Content, Tensil_Strength, Grade;
    printf("Enter the Hardness of Steel\n");
scanf("%f", &Hardness);
printf("Enter the carbon content of Steel\n");
scanf("%f", &Carbon_Content);
printf("Enter the Tensil Strenght of Steel\n");
scanf("%f", &Tensil_Strength);

if(Hardness > 50 && Carbon_Content < 0.7 && Tensil_Strength > 5600)
Grade = 10.0;

else if(Hardness > 50 && Carbon_Content < 0.7)
Grade = 9.0;

else if(Carbon_Content < 0.7 && Tensil_Strength > 5600)
Grade = 8.0;

else if(Hardness > 50 && Carbon_Content < 0.7)
Grade = 7.0;

else if(Hardness > 50 || Carbon_Content < 0.7 || Tensil_Strength > 5600)
Grade = 6.0;

else Grade = 5.0;

printf("Grade = %f\n", Grade);


    return 0;}