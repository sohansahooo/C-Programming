/*
 * Problem 4: Write a function and pass the value by reference.
 */

#include <stdio.h>

// Function that takes a pointer (pass by reference)
void modify(int *num) {
    // Modifying the value at the memory address pointed by num
    *num = *num + 10;
    printf("Inside function, value: %d\n", *num);
}

int main() {
    int value = 5;
    
    printf("Before function call, value: %d\n", value);
    
    // Passing the address of 'value' to the function
    modify(&value);
    
    printf("After function call, value: %d\n", value);
    
    return 0;
}
