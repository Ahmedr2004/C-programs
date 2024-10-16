#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int i, j, count;

    
    for (i = 0; i < size - 1; i++) {
        
        count = 1;

        
        for (j = i + 1; j < size; j++) {
            
            if (arr[i] == arr[j]) {
                count++;

                
                arr[j] = arr[size - 1] + 1; 
            }
        }

        
        if (count > 1) {
            printf("Element %d is duplicated %d times at indices: ", arr[i], count);

            
            for (j = 0; j < size; j++) {
                if (arr[j] == arr[i]) {
                    printf("%d ", j);
                }
            }

            printf("\n");
        }
    }
}

int main() {
    int size;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    findDuplicates(arr, size);

    return 0;
}
