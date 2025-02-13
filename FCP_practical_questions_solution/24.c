#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    arr = (int *)malloc(size * sizeof(int));

    
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1; 
    }

    
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    
    printf("Elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    free(arr);

    return 0;
}
