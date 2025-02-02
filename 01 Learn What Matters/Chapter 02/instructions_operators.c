/*
    CHAPTER 2: INSTRUCTIONS AND OPERATORS
    --------------------------------------
    A C program is a set of instructions, similar to a recipe that contains steps
    to prepare a particular dish.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    /* TYPES OF INSTRUCTIONS */
    // 1. Type Declaration Instructions
    int a;
    float b;
    char c;

    // Other Variations
    int i = 10;
    int j = i;
    int x = 2, y = 3, z = 4, w = 5;
    int j1 = x + j - i; // Valid

    // Valid: Assigning the same value to multiple variables
    int p, q, r, s;
    p = q = r = s = 30;

    /* ARITHMETIC INSTRUCTIONS */
    int b1 = 2, c1 = 3;
    int result = b1 * c1; // Legal

    // Commonly used arithmetic operators:
    int sum = x + y;
    int diff = x - y;
    int prod = x * y;
    int quot = x / y;
    int rem = x % y;

    // Type Conversion
    int intResult = 5 / 2;       // Becomes 2 (integer division)
    float floatResult = 5.0 / 2; // Becomes 2.5 (float division)

    /* OPERATOR PRECEDENCE */
    // Priority: *, /, % > +, - > =
    int precedenceExample = 3 * x - 8 * y; // Evaluates as (3*x) - (8*y)

    /* CONTROL INSTRUCTIONS */
    // 1. Sequence Control Instruction
    printf("This is a sequence control instruction.\n");

    // 2. Decision Control Instruction
    if (x > y)
    {
        printf("X is greater than Y\n");
    }
    else
    {
        printf("Y is greater or equal to X\n");
    }

    // 3. Loop Control Instruction
    for (int k = 1; k <= 5; k++)
    {
        printf("Loop iteration: %d\n", k);
    }

    // 4. Case Control Instruction
    int choice = 2;
    switch (choice)
    {
    case 1:
        printf("Choice is 1\n");
        break;
    case 2:
        printf("Choice is 2\n");
        break;
    default:
        printf("Invalid Choice\n");
    }

    return 0;
}
