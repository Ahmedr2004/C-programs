#include <stdio.h>
#include <stdlib.h>

// Custom comparator for qsort
int compare(const void *a, const void *b) {
    char num1[20], num2[20];
    sprintf(num1, "%d%d", *(int*)a, *(int*)b);
    sprintf(num2, "%d%d", *(int*)b, *(int*)a);
    return atoi(num2) - atoi(num1);
}

// Function to print the largest integer
void printLargestInteger(int arr[], int n) {
    qsort(arr, n, sizeof(arr[0]), compare);

    printf("The largest integer is: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

// Example usage
int main() {
    int A[] = {990, 9, 1, 9};
    int n = sizeof(A) / sizeof(A[0]);

    printLargestInteger(A, n);

    return 0;
}

