#include <stdio.h>
#include <time.h>

int main() {
    clock_t start = clock();

    printf("samyaak\n");

    clock_t end = clock();
    double total_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", total_time_used);

    return 0;
}
