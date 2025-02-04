/*
2. Write a program to print multiplication table of 10 in reversed order.
*/

#include <stdio.h>

int main()
{
    int n, result;

    printf("Which multiplication table: ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}