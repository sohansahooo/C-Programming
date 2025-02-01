/*
4. Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.
*/

#include <stdio.h>

int main()
{
    float principal;
    int time;
    int rate;
    float interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate: ");
    scanf("%d", &rate);

    printf("Enter the time: ");
    scanf("%d", &time);

    interest = (principal * rate * time) / 100.0;
    printf("The interest amount is: %.2f\n", interest);
    return 0;
}