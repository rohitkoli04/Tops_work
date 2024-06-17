// WAP to show difference between Structure and Union.

#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int roll_number;
    char name[50];
    float marks;
};

// Define a union
union Data {
    int int_data;
    float float_data;
    char str_data[20];
};

int main() {
    // Structure example
    printf("Example of Structure:\n");
    struct Student s1;
    s1.roll_number = 101;
    strcpy(s1.name, "John");
    s1.marks = 85.5;
    
    printf("Roll Number: %d\n", s1.roll_number);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    printf("Size of Structure: %lu bytes\n\n", sizeof(s1));

    // Union example
    printf("Example of Union:\n");
    union Data data;
    data.int_data = 10;
    printf("Integer Data: %d\n", data.int_data);
    
    data.float_data = 25.5;
    printf("Float Data: %.2f\n", data.float_data);
    
    strcpy(data.str_data, "Hello");
    printf("String Data: %s\n", data.str_data);
    
    printf("Size of Union: %lu bytes\n", sizeof(data));

    return 0;
}
