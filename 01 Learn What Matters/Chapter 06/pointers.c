#include <stdio.h>

// A pointer is a variable that stores the address of another variable

// THE "ADDRESS OF" (&) OPERATOR
// The address of operator is used to obtain the address of a given variable

// THE "VALUE AT ADDRESS" (*) OPERATOR
// The value at address operator is used to obtain the value present at a given memory address

int main() {
    int i = 8; // Declare an integer variable
    int *j;    // Declare a pointer to an integer
    j = &i;    // Store address of i in j
    
    // Printing addresses
    printf("Address of i: %p\n", (void*)&i);
    printf("Address stored in j (i's address): %p\n", (void*)j);
    printf("Address of j: %p\n", (void*)&j);
    
    // Printing values
    printf("Value of i: %d\n", i);
    printf("Value using *(&i): %d\n", *(&i));
    printf("Value using *j: %d\n", *j);
    
    // POINTER TO A POINTER
    int **k; // Pointer to a pointer
    k = &j;  // Store address of j in k
    
    // Printing pointer to pointer information
    printf("Address of k: %p\n", (void*)&k);
    printf("Value stored in k (Address of j): %p\n", (void*)k);
    printf("Value at *k (Address of i): %p\n", (void*)*k);
    printf("Value at **k (Value of i): %d\n", **k);
    
    return 0;
}

// FUNCTION CALL TYPES
// Call by Value: Passing values directly to the function
// Call by Reference: Passing the address of variables

// Function to swap two integers using pointers (Call by Reference)
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main_swap() {
    int a = 3, b = 4;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b); // Passing addresses of a and b
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
