/*
2. Write a function to convert Celsius temperature into Fahrenheit.
*/

#include <stdio.h>

float c2f(float c);

float c2f(float c)
{
    return (c * (9.0 / 5.0)) + 32;
}

int main()
{
    float c = 45;
    float f = c2f(c);
    printf("The temperate in Fahrenheit is: %.2f", f);
    return 0;
}