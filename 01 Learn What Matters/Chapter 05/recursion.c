#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int x)
{
    // Base case: If x is 0 or 1, return 1 (stopping condition)
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        // Recursive case: factorial(n) = n * factorial(n-1)
        return x * factorial(x - 1);
    }
}

int main()
{
    int num;

    // Prompting user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Validating input: Factorial is only defined for non-negative numbers
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        /*
         * Recursive Call Breakdown (Dry Run Example for num = 5):
         * factorial(5) = 5 * factorial(4)
         * factorial(4) = 4 * factorial(3)
         * factorial(3) = 3 * factorial(2)
         * factorial(2) = 2 * factorial(1)
         * factorial(1) = 1 (Base Case)
         * Now, multiplication unfolds in reverse order.
         */

        // Calling the recursive factorial function and printing the result
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}

/*
 * IMPORTANT NOTES:
 * 1. Recursion is often a direct way to implement certain algorithms, but not always the most direct for every algorithm. Recursion is particularly suited
 *    for problems that can be divided into smaller, similar subproblems (like factorial computation or tree traversal), but for some algorithms, iterative *    approaches might be more straightforward or efficient.
 *
 * 2. The condition in a recursive function that stops further recursion is called the base case. This correction clarifies that the base case is crucial as *    it prevents infinite recursion and ensures the function terminates correctly.
 *
 * 3. Sometimes, due to an oversight by the programmer, a recursive function can continue to run indefinitely without reaching a base case, potentially
 *    causing a stack overflow or memory error. This statement highlights the risk of infinite recursion and its consequences, emphasizing the importance of *    properly defining base cases in recursive functions.
 */
