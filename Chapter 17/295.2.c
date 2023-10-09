#include <stdio.h>

struct address
{

    char phone[12];
    char city[20];
    char district[20];
    int pincode;


};

struct employee
{
    char name[30];
    char department[20];
    struct address add;

};


int main(void)
{   
    struct employee emp;
    int i ;
    
    printf("Enter the name of the employee\n");
    scanf("%[^\n]", emp.name);

    fflush(stdin);

    printf("Enter the Department\n");
    scanf("%[^\n]", emp.department);

    fflush(stdin);

    printf("Enter the phone number\n");
    scanf("%[^\n]", emp.add.phone);

    fflush(stdin);

    printf("Enter the city\n");
    scanf("%[^\n]", emp.add.city);

    fflush(stdin);

    printf("Enter the District\n");
    scanf("%[^\n]", emp.add.district);

    fflush(stdin);

    printf("Enter the pincode\n");
    scanf("%d", &emp.add.pincode);

printf("Name = %s\n Department = %s\n Phone Number = %s\n City = %s\n District = %s\n Pincode = %d\n", emp.name, emp.department, emp.add.phone, emp.add.city, emp.add.district, emp.add.pincode);

    return 0;}