/* CHAPTER 5 - FUNCTIONS AND RECURSION

   Sometimes our program gets bigger in size and it's not possible for a programmer to
   track which piece of code is doing what.
   Function is a way to break our code into chunks so that it is possible for a programmer
   to reuse them.

   WHAT IS A FUNCTION?
   A function is a block of code which performs a particular task.
   A function can be reused by the programmer in a given program any number of times.
*/

#include <stdio.h>

// Function Prototypes
void goodMorning();
void goodAfternoon();
void goodNight();

// Main function
int main()
{
    goodMorning();   // Function call
    goodAfternoon(); // Function call
    goodNight();     // Function call
    return 0;
}

// Function Definitions
void goodMorning()
{
    printf("Good morning\n");
}

void goodAfternoon()
{
    printf("Good afternoon\n");
}

void goodNight()
{
    printf("Good night\n");
}

/* IMPORTANT POINTS
   - Execution of a C program starts from main().
   - A C program can have more than one function.
   - Every function gets called directly or indirectly from main().
*/

/* TYPES OF FUNCTIONS
   1. Library functions → Commonly required functions grouped together in a library file on disk.
   2. User defined function → These are the functions declared and defined by the user.
*/

/* PASSING VALUES TO FUNCTION
   We can pass values to a function and can get a value in return from a function.
*/

// Function Prototype
int sum(int a, int b);

int main()
{
    int d = sum(2, 3); // d becomes 5
    printf("Sum is %d\n", d);
    return 0;
}

// Function Definition
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

/* NOTE:
   1. Parameters are the values or variable placeholders in the function definition. Example: a & b.
   2. Arguments are the actual values passed to the function to make a call. Example: 2 & 3.
   3. A function can return only one value at a time.
   4. If the passed variable is changed inside the function, the function call doesn’t change the value in the calling function.
*/

// Demonstrating that changing a variable inside a function does not affect the calling function
int change(int a);

int main()
{
    int b = 22;
    change(b);
    printf("b is %d\n", b); // Prints "b is 22"
    return 0;
}

int change(int a)
{
    a = 77; // This does not change the original b
    return 0;
}

// Quick Quiz: Use the library function to calculate the area of a square with side a.
#include <math.h>
float areaOfSquare(float a);

int main()
{
    float side = 5.0;
    float area = areaOfSquare(side);
    printf("Area of square with side %.2f is %.2f\n", side, area);
    return 0;
}

float areaOfSquare(float a)
{
    return pow(a, 2);
}