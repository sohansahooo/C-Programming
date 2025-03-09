/*
2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?
*/

#include<stdio.h>

int main(){
    int i = 10;
    int* ptr = &i;
    printf("The address of i is %u\n", &i);
    printf("The address of i is %d\n", *ptr);
    return 0;
}