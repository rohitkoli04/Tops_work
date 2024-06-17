
#include <stdio.h>

int main() {
    int numberOfStudents;

    
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);


    int totalApples = numberOfStudents * 5;

    printf("Total apples required: %d\n", totalApples);

    return 0;
}
