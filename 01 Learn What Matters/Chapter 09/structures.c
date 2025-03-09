#include <stdio.h>
#include <string.h> // Required for string functions

/*
CHAPTER 9 – STRUCTURES
Array and strings → Similar data (int, float, char).
Structures can hold → Dissimilar data.

A C structure can be created as follows:
*/
struct employee {
    int code; // This declares a new user-defined data type!
    float salary;
    char name[10];
}; // Semicolon is important

int main() {
    struct employee e1; // Creating a structure variable
    strcpy(e1.name, "harry");
    e1.code = 100;
    e1.salary = 71.22;
    
    printf("Employee Name: %s\n", e1.name);
    printf("Employee Code: %d\n", e1.code);
    printf("Employee Salary: %.2f\n", e1.salary);

    /*
    ARRAY OF STRUCTURES
    Just like an array of integers, floats, and characters, we can create an array of structures.
    */
    struct employee facebook[2] = {{101, 80.5, "Alice"}, {102, 90.75, "Bob"}};
    
    for (int i = 0; i < 2; i++) {
        printf("Employee %d - Name: %s, Code: %d, Salary: %.2f\n", i+1, facebook[i].name, facebook[i].code, facebook[i].salary);
    }

    /*
    POINTER TO STRUCTURES
    A pointer to structures can be created as follows:
    */
    struct employee *ptr;
    ptr = &e1;
    printf("Accessing using pointer: %d\n", (*ptr).code);
    
    // ARROW OPERATOR
    printf("Using arrow operator: %d\n", ptr->code);
    
    /*
    PASSING STRUCTURE TO A FUNCTION
    */
    void show(struct employee e); // Function prototype
    show(e1);
    
    return 0;
}

void show(struct employee e) {
    printf("Showing Employee - Name: %s, Code: %d, Salary: %.2f\n", e.name, e.code, e.salary);
}

/*
TYPEDEF KEYWORD
We can use the ‘typedef’ keyword to create an alias name for data types in C.
*/
typedef struct Complex {
    float real;
    float img;
} ComplexNo;

/*
EXAMPLE USAGE
*/
int main2() {
    ComplexNo c1 = {3.5, 2.7};
    ComplexNo c2 = {1.2, 4.8};
    printf("Complex Number 1: %.2f + %.2fi\n", c1.real, c1.img);
    printf("Complex Number 2: %.2f + %.2fi\n", c2.real, c2.img);
    return 0;
}