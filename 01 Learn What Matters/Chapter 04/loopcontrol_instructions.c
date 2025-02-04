/*
CHAPTER 4: LOOP CONTROL INSTRUCTIONS

WHY LOOPS?
Sometimes we want our programs to execute a few sets of instructions repeatedly.
For example, printing 1 to 100, first 100 even numbers, etc.
Loops make it easy for a programmer to execute instructions multiple times.

TYPES OF LOOPS IN C:
1. while loop
2. do-while loop
3. for loop
*/

#include <stdio.h>

// WHILE LOOP Example
void whileLoopExample()
{
    int i = 0;
    while (i < 10)
    {
        printf("The value of i is %d\n", i);
        i++;
    }
}

// Quick Quiz: Print natural numbers from 10 to 20 using while loop
void quickQuizWhile()
{
    int i = 10;
    while (i <= 20)
    {
        printf("%d\n", i);
        i++;
    }
}

/*
INCREMENT AND DECREMENT OPERATORS:
i++  -> i is increased by 1
i--  -> i is decreased by 1
*/

// DO-WHILE LOOP Example
void doWhileLoopExample()
{
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 10);
}

// Quick Quiz: Print first 'n' natural numbers using do-while loop
void quickQuizDoWhile(int n)
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
}

// FOR LOOP Example
void forLoopExample()
{
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", i);
    }
}

// Quick Quiz: Print first 'n' natural numbers using for loop
void quickQuizForLoop(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}

// DECREMENTING FOR LOOP
void decrementingForLoop()
{
    for (int i = 5; i; i--)
    {
        printf("%d\n", i);
    }
}

// Quick Quiz: Print 'n' natural numbers in reverse order
void quickQuizReverseOrder(int n)
{
    for (int i = n; i > 0; i--)
    {
        printf("%d\n", i);
    }
}

// BREAK STATEMENT Example
void breakStatementExample()
{
    for (int i = 0; i < 1000; i++)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            break;
        }
    }
}

// CONTINUE STATEMENT Example
void continueStatementExample()
{
    int skip = 5;
    int i = 0;
    while (i < 10)
    {
        if (i == skip)
        {
            i++;
            continue; // skips the rest of the loop body for i == 5
        }
        printf("%d\n", i);
        i++;
    }
}

int main()
{
    printf("WHILE LOOP Example:\n");
    whileLoopExample();

    printf("\nQuick Quiz: Print natural numbers from 10 to 20:\n");
    quickQuizWhile();

    printf("\nDO-WHILE LOOP Example:\n");
    doWhileLoopExample();

    printf("\nQuick Quiz: Print first 4 natural numbers using do-while loop:\n");
    quickQuizDoWhile(4);

    printf("\nFOR LOOP Example:\n");
    forLoopExample();

    printf("\nQuick Quiz: Print first 5 natural numbers using for loop:\n");
    quickQuizForLoop(5);

    printf("\nDECREMENTING FOR LOOP:\n");
    decrementingForLoop();

    printf("\nQuick Quiz: Print first 5 natural numbers in reverse order:\n");
    quickQuizReverseOrder(5);

    printf("\nBREAK STATEMENT Example:\n");
    breakStatementExample();

    printf("\nCONTINUE STATEMENT Example:\n");
    continueStatementExample();

    return 0;
}