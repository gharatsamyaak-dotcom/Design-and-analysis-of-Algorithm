#include <stdio.h>
#include <time.h>

// Iterative method - O(n) time, O(1) space
unsigned long long factorialIterative(int n) {
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Recursive method - O(n) time, O(n) auxiliary stack space
unsigned long long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int n;
    printf("Enter a non-negative integer n (0 - 20): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Please enter a valid integer between 0 and 20 (values > 20 overflow 64-bit integer).\n");
        return 1;
    }

    clock_t start = clock();
    unsigned long long result_iterative = factorialIterative(n);
    clock_t end = clock();
    double time_iterative = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    unsigned long long result_recursive = factorialRecursive(n);
    end = clock();
    double time_recursive = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\n--- Factorial of %d (%d!) ---\n", n, n);
    printf("Iterative Result: %llu (Time: %f seconds)\n", result_iterative, time_iterative);
    printf("Recursive Result: %llu (Time: %f seconds)\n", result_recursive, time_recursive);

    return 0;
}
