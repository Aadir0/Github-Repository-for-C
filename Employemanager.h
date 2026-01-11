#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Employee
{
    int id;
    char name[100];
    char position[50];
    float salary;
};

void initializeEmployee(struct Employee* emp, int id, const char* name, const char* position, float salary)
{
    emp->id = id;
    strncpy(emp->name, name, sizeof(emp->name) - 1);
    emp->name[sizeof(emp->name) - 1] = '\0';
    strncpy(emp->position, position, sizeof(emp->position) - 1);
    emp->position[sizeof(emp->position) - 1] = '\0';
    emp->salary = salary;
}

void displayEmployee(const struct Employee* emp)
{
    printf("Employee ID: %d\n", emp->id);
    printf("Name: %s\n", emp->name);
    printf("Position: %s\n", emp->position);
    printf("Salary: %.2f\n", emp->salary);
}