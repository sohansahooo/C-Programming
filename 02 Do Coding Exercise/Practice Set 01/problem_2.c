/*
2. Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.
*/

#include <stdio.h>

int main()
{
    float pi = 3.14;
    int r;
    int h;

    printf("Enter the radius: ");
    scanf("%d", &r);

    printf("Enter the height: ");
    scanf("%d", &h);

    float area = pi * r * r;
    float volume = area * h;

    printf("The area of circle with radius %d is %.2f\n", r, area);
    printf("The volume of a cylinder with radius %d and height %d is %.2f\n", r, h, volume);

    return 0;
}