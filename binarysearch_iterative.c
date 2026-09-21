#include <stdio.h>
#include <time.h>


int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int n, target;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter the target element to search for: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid target.\n");
        return 1;
    }

    clock_t start = clock();

    int result = binarySearch(arr, n, target);

    clock_t end = clock();

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    double total_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", total_time_used);

    return 0;
}
