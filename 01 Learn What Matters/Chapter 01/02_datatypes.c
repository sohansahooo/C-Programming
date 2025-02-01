#include <stdio.h>

int main()
{
    // Integer variable
    int num = 10;
    // Floating-point variable
    float price = 3.99;
    // Double-precision floating-point variable
    double largeValue = 123456.789;
    // Character variable
    char letter = 'B';
    // String variable
    char name[] = "John";

    // Print the variables
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", price);
    printf("Double: %lf\n", largeValue);
    printf("Character: %c\n", letter);
    printf("String: %s\n", name);

    return 0;
}
