#include <stdio.h>
#include <time.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    clock_t start = clock();

    for (int i = 1; i <= n; i *= 2) {
        printf("samyaak\n");
    }

    clock_t end = clock();
    double total_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", total_time_used);

    return 0;
}
