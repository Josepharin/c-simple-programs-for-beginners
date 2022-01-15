/*
    This program demonstrates how initialize a structure variable's
    member variables with values.
*/
#include <stdio.h>

struct Employee{
    char name[30];
    int  employee_id;
    float salary;
};

int main (){

    struct Employee employee1;

    printf("\n Enter details:\n");
    printf("Name: ");
    scanf("%s", employee1.name);
    printf("ID: ");
    scanf("%d", &employee1.employee_id);
    printf("Salary: ");
    scanf("%f", &employee1.salary);

    printf("Submitted details are:\n");
    printf("Name: \t\t %s\n", employee1.name);
    printf("Employee ID: \t %d\n", employee1.employee_id);
    printf("Salaray: \t $%.2f \n", employee1.salary);

    return 0;
}