/*
4. Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.
*/

#include <stdio.h>

int main()
{
    float principal;
    int year;
    int rate;
    float interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the year: ");
    scanf("%d", &year);

    printf("Enter the rate of interest: ");
    scanf("%d", &rate);

    interest = ((principal * rate) * year) / 100.0;
    printf("The interest amount is: %.2f\n", interest);
    return 0;
}