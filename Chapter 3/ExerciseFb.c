#include <stdio.h>
int main()
{int Age1, Age2, Age3;
printf("Enter the Age of Ram\n");
scanf("%d", &Age1);
printf("Enter the Age of Shyam\n");
scanf("%d", &Age2);
printf("Enter the Age of Ajay\n");
scanf("%d", &Age3);

if (Age1<Age2)
{if (Age1<Age3)
{printf("Age of Ram = %d\t Age of Shyam = %d\t Age of Ajay = %d\t", Age1, Age2, Age3);

printf("Ram is the youngest\n", Age1);

}

else {
    printf(" Age of Ram = %d\t Age of Shyam = %d\t Age of Ajay = %d\t", Age1, Age2, Age3);
    printf("Ajay is the youngest\n", Age3);}

}
else
{if(Age2<Age3)
{printf("Shyam is the youngest\n", Age2);
printf("Age of Ram = %d\t Age of Shyam = %d\t Age of Ajay = %d\t", Age1, Age2, Age3);}

else
       {printf("Age of Ram = %d\t Age of Shyam = %d\t Age of Ajay = %d\t", Age1, Age2, Age3);
       printf("Ajay is the youngest\n", Age3);}

}


    return 0;}