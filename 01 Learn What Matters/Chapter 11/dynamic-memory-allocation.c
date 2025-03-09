/* CHAPTER 11 – DYNAMIC MEMORY ALLOCATION */

#include <stdio.h>
#include <stdlib.h>

// Dynamic Memory Allocation (DMA) allows allocating memory at runtime.
// Functions used for DMA in C:
// 1. malloc()
// 2. calloc()
// 3. free()
// 4. realloc()

int main() {
    // MALLOC FUNCTION
    // Allocates memory and returns a void pointer
    int *ptr1;
    ptr1 = (int *)malloc(30 * sizeof(int)); // Allocates memory for 30 integers
    if (ptr1 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // CALLOC FUNCTION
    // Allocates contiguous memory and initializes all blocks with 0
    float *ptr2;
    ptr2 = (float *)calloc(30, sizeof(float)); // Allocates memory for 30 floats
    if (ptr2 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // FREE FUNCTION
    // Deallocates previously allocated memory
    free(ptr1);
    free(ptr2);
    
    // REALLOC FUNCTION
    // Reallocates memory to a new size
    int *ptr3;
    ptr3 = (int *)malloc(3 * sizeof(int)); // Initially allocating memory for 3 integers
    if (ptr3 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    ptr3 = (int *)realloc(ptr3, 5 * sizeof(int)); // Expanding to 5 integers
    if (ptr3 == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    free(ptr3); // Freeing memory
    
    return 0;
}
