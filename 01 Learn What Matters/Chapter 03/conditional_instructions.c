/*
 * CONDITIONAL INSTRUCTIONS IN C
 *
 * Decision-making instructions allow a program to execute certain statements based on conditions.
 *
 * Types of Decision-Making Instructions:
 * 1. if-else statement
 * 2. switch statement
 *
 * ------------------------------------------
 * IF-ELSE STATEMENT
 * ------------------------------------------
 * Syntax:
 * if (condition) {
 *     // Statements if condition is true
 * } else {
 *     // Statements if condition is false
 * }
 *
 * Example:
 */
#include <stdio.h>
int main()
{
    int a = 23;
    if (a > 18)
    {
        printf("You can drive\n");
    }
    return 0;
}
/*
 * Relational Operators:
 * ==, >=, >, <, <=, !=
 *
 * Logical Operators:
 * && (AND) - True when both conditions are true
 * || (OR) - True when at least one condition is true
 * ! (NOT) - Reverses the truth value
 *
 * ELSE IF CLAUSE:
 * Instead of using multiple if statements, we can use an if-else if-else ladder.
 *
 * Example:
 */
int grade(int marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 70)
        return 'C';
    else if (marks >= 60)
        return 'D';
    else if (marks >= 50)
        return 'E';
    else
        return 'F';
}
/*
 * OPERATOR PRECEDENCE (from highest to lowest priority):
 * 1. ! (NOT)
 * 2. *, /, %
 * 3. +, -
 * 4. <, >, <=, >=
 * 5. ==, !=
 * 6. &&
 * 7. ||
 * 8. =
 *
 * ------------------------------------------
 * SWITCH CASE CONTROL INSTRUCTION
 * ------------------------------------------
 * Used to make a choice between multiple alternatives.
 *
 * Syntax:
 * switch (expression) {
 * case value1:
 *     // Code
 *     break;
 * case value2:
 *     // Code
 *     break;
 * default:
 *     // Default case
 * }
 *
 * Example:
 */
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("Grade A\n");
        break;
    case 8:
        printf("Grade B\n");
        break;
    case 7:
        printf("Grade C\n");
        break;
    case 6:
        printf("Grade D\n");
        break;
    case 5:
        printf("Grade E\n");
        break;
    default:
        printf("Grade F\n");
    }
    return 0;
}
/*
 * CONDITIONAL (TERNARY) OPERATOR:
 * Syntax: condition ? expression_if_true : expression_if_false
 *
 * Example:
 */
int main()
{
    int num = 10;
    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");
    return 0;
}
