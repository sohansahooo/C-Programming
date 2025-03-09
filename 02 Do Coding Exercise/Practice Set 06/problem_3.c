/*
3. Write a program to change the value of a variable to ten times of its current value.
*/

#include<stdio.h>

void change_value(int*);

void change_value(int* x){
    *x = *x * 10;
}

int main(){
    int x = 45;
    printf("The value of x is %d\n", x);
    change_value(&x);
    printf("The value of x is %d\n", x);
    
    return 0;
}