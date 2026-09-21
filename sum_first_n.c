#include <stdio.h>
#include <time.h>

// Method 1: Iterative approach - O(n)
long long sumIterative(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// Method 2: Mathematical formula - O(1)
long long sumFormula(int n) {
    return (long long)n * (n + 1) / 2;
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    clock_t start = clock();
    long long result_iterative = sumIterative(n);
    clock_t end = clock();
    double time_iterative = ((double)(end - start)) / CLOCKS_PER_SEC;

    long long result_formula = sumFormula(n);

    printf("\n--- Sum of First %d Numbers ---\n", n);
    printf("Result (Iterative O(n)): %lld\n", result_iterative);
    printf("Time taken (Iterative):  %f seconds\n", time_iterative);
    printf("Result (Formula O(1)):   %lld\n", result_formula);

    return 0;
}
