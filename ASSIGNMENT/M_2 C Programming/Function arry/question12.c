//  WAP to accept 5 students name and store it in array


#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50
#define NUM_STUDENTS 5

int main() {
    char studentNames[NUM_STUDENTS][MAX_LENGTH];

    // Input student names
    printf("Enter names of %d students:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", studentNames[i]);
    }

    // Display student names
    printf("\nStudent names entered:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: %s\n", i + 1, studentNames[i]);
    }

    return 0;
}
