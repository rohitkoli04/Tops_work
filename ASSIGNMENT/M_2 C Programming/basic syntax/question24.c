#include <stdio.h>

int main() {
    char names[5][50];
    float salaries[5];
    float totalSalary = 0, averageSalary;
    int i;

    // Input names and salaries of 5 employees
    for (i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        totalSalary += salaries[i];
    }

    // Calculate average salary
    averageSalary = totalSalary / 5;

    // Display total and average salary
    printf("\nTotal salary of all employees: %.2f\n", totalSalary);
    printf("Average salary of all employees: %.2f\n", averageSalary);

    return 0;
}
