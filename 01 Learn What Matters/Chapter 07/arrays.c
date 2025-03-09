#include <stdio.h>

// CHAPTER 7 – ARRAYS
// An array is a collection of similar elements. It allows a single variable to store multiple values.

// SYNTAX:
int marks[90]; // Integer array
char name[20]; // Character array or string
float percentile[90]; // Float array

// Note: Array index starts from 0

// ACCESSING ELEMENTS
// Elements of an array can be accessed using:
// scanf("%d", &marks[0]); // Input first value
// printf("%d", marks[0]); // Output first value

// Quick Quiz: Accept marks of five students in an array and print them
int main_array() {
    int marks[5];
    printf("Enter marks of five students: \n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }
    printf("Marks entered: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");
    return 0;
}

// INITIALIZATION OF AN ARRAY
int cgpa[3] = {9, 8, 8}; // Arrays can be initialized during declaration
float scores[] = {33, 40}; // Size is inferred from initial values

// ARRAYS IN MEMORY
// Example:
int arr[3] = {1, 2, 3}; // 1 integer = 4 bytes, so 4 * 3 = 12 bytes reserved in memory

// POINTER ARITHMETIC
int pointer_arithmetic() {
    int i = 32;
    int *a = &i; // Pointer to integer
    printf("Address before increment: %p\n", (void*)a);
    a++; // Points to next memory location of int type (increments by 4 bytes)
    printf("Address after increment: %p\n", (void*)a);

    char ch = 'A';
    char *b = &ch;
    printf("Char Address before increment: %p\n", (void*)b);
    b++; // Increments by 1 byte (char size)
    printf("Char Address after increment: %p\n", (void*)b);

    float f = 1.7;
    float *c = &f;
    printf("Float Address before increment: %p\n", (void*)c);
    c++; // Increments by 4 bytes (float size)
    printf("Float Address after increment: %p\n", (void*)c);

    return 0;
}

// ACCESSING ARRAY USING POINTERS
void pointer_array_demo() {
    int arr[] = {5, 9, 15};
    int *ptr = arr; // Points to first element
    printf("First element: %d\n", *ptr);
    ptr++;
    printf("Second element: %d\n", *ptr);
}

// PASSING ARRAY TO FUNCTIONS
void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main_passing_array() {
    int numbers[] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);
    return 0;
}

// MULTIDIMENSIONAL ARRAYS
int main_2D_array() {
    int arr[3][2] = {{1, 4}, {7, 9}, {11, 22}};
    printf("2D Array Elements:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Quick Quiz: Create a 2D array by taking input from the user and display it
void input_display_2D_array() {
    int arr[2][2];
    printf("Enter 4 elements for 2x2 array:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The entered 2D array is:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    main_array();
    pointer_arithmetic();
    pointer_array_demo();
    main_passing_array();
    main_2D_array();
    input_display_2D_array();
    return 0;
}
