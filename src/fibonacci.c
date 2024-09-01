/**
 * @file fibonacci.c
 * @author reztib
 * @brief A program to compute Fibonacci numbers efficiently.
 * @version 0.2
 * @date 2024-09-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 1000

// Function to validate input
bool read_int(int *num) {
    int result = scanf("%d", num);
    return result == 1;
}

// Function to calculate the Fibonacci number at position n iteratively
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0, b = 1, c;

    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int num;

    // Prompt the user to enter a number
    printf("Enter a number (int): ");
    
    // Read the number from the user and validate the input
    while (!read_int(&num)) {
        printf("Invalid input. Please enter a valid integer: ");
        // Clear the input buffer
        while (getchar() != '\n');
    }

    // Check if the entered number is negative
    if (num < 0) {
        printf("Fibonacci number is not defined for negative integers.\n");
    } else {
        // Compute and print the Fibonacci number at the entered position
        printf("Fibonacci number at position %d is %d\n", num, fibonacci(num));
    }

    return 0; // End the program successfully
}
