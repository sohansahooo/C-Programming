/*
1. Write a program to print the address of a variable. Use this address to get the value of the variable.
*/

#include<stdio.h>

int main(){
    int a = 10;
    printf("The address of a is %u\n", &a);
    return 0;
}