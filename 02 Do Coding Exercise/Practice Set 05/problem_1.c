/*
1. Write a program using function to find average of three numbers.
*/

#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a = 3, b = 5, c = 6;
    printf("The average of a, b, and c is %.2f", average(a, b, c));
    return 0;
}