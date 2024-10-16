#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, n1;

    
    printf("Enter the first number: ");
    scanf("%d", &n);

    printf("Enter the second number: ");
    scanf("%d", &n1);

    
    printf("Before swapping: num1 = %d, num2 = %d\n", n, n1);

    
    swapNumbers(&n, &n1);

    
    printf("After swapping: num1 = %d, num2 = %d\n", n, n1);

    return 0;
}
