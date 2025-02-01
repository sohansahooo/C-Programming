#include <stdio.h>

int main()
{
    int age;
    float height;
    char name[50];

    // Taking integer input
    printf("Enter your age: ");
    scanf("%d", &age);

    // Taking float input
    printf("Enter your height: ");
    scanf("%f", &height);

    // Taking string input
    printf("Enter your name: ");
    scanf("%s", name);

    // Print the user input
    printf("Name of person: %s\n", name);
    printf("Age of person: %d\n", age);
    printf("Height of person: %.1f\n", height);

    return 0;
}
