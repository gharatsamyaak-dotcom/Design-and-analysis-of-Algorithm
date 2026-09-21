#include <stdio.h>
#include <time.h>

void exponential(int n) {
    if (n <= 0) {
        printf("samyaak\n");
        return;
    }
    exponential(n - 1);
    exponential(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    clock_t start = clock();

    exponential(n);

    clock_t end = clock();
    double total_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", total_time_used);

    return 0;
}
