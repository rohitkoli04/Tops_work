// .WAP to show difference between Structure and Union

#include <stdio.h>

// Define a structure
struct ExampleStruct {
    int x;
    char y;
};

// Define a union
union ExampleUnion {
    int x;
    char y;
};

int main() {
    struct ExampleStruct myStruct;
    union ExampleUnion myUnion;

    // Size of structure
    printf("Size of Structure: %lu bytes\n", sizeof(myStruct));

    // Size of union
    printf("Size of Union: %lu bytes\n", sizeof(myUnion));

    return 0;
}
``
