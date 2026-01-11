#include<stdio.h>
#include<string.h>
#include"Employemanager.h"

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar(); // Clear the newline left by scanf

    struct Employee emp[n];
    for (int i = 0; i < n; i++)
    {
        char name[100];
        char position[50];
        float salary;
        int id;

        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &id);
        while(getchar() != '\n'); // Clear the newline left by scanf
        printf("Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0; // Remove trailing newline
        printf("Position: ");
        fgets(position, sizeof(position), stdin);
        position[strcspn(position, "\n")] = 0; // Remove trailing newline
        printf("Salary: ");
        scanf("%f", &salary);
        getchar(); // Clear the newline left by scanf

        initializeEmployee(&emp[i], id, name, position, salary);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        displayEmployee(&emp[i]);
    }
    return 0;
}