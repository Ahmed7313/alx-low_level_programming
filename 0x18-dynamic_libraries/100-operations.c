#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two numbers
int sub(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int mul(int a, int b) {
    return a * b;
}

// Function to divide two numbers
double div(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return (double)a / b;
}

// Function to calculate modulus of two numbers
int mod(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero in modulus operation!\n");
        return 0;
    }
    return a % b;
}
