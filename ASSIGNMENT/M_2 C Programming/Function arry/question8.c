//  WAP to reverse a string and check that the string is palindrome or not
// Write a program of structure employee that provides the following
// a. information -print and display empno, empname, address
// andage
// b. Write a program of structure for five employee that
// provides the following information -print and display
// empno, empname, address andage


#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function prototype
void displayEmployee(struct Employee emp);

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    printf("Enter employee name: ");
    scanf("%s", emp.empname);
    printf("Enter employee address: ");
    scanf("%s", emp.address);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);

    // Display employee information
    printf("\nEmployee Information:\n");
    displayEmployee(emp);

    return 0;
}

// Function to display employee information
void displayEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);
}
