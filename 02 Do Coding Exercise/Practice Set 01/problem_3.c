/*
3. Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/

#include <stdio.h>

int main()
{
    int celcius;
    float fahrenheit;

    printf("Enter the temerature in Celcius: ");
    scanf("%d", &celcius);

    fahrenheit = (celcius * (9.0 / 5.0)) + 32;
    printf("The temerature is: %.2f\n", fahrenheit);

    return 0;
}