/*
1. Write a program to print multiplication table of a given number n.

my approach: 1. getting number input
             2. using for loop to iterate from 1 to 10
             3. calculate n * i in the loop
             4. format & print the result
*/

#include <stdio.h>

int main()
{
    int n;
    int result;

    printf("Which multiplication table: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }

    return 0;
}