#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 500

void multiply_auto(int a[N][N], int b[N][N], int result[N][N]) {
    for (volatile int i = 0; i < N; i++) {
        for (volatile int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (volatile int k = 0; k < N; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void multiply_register(int a[N][N], int b[N][N], int result[N][N]) {
    for (register int i = 0; i < N; i++) {
        for (register int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (register int k = 0; k < N; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[N][N], b[N][N], result_auto[N][N], result_register[N][N];
    clock_t start, end;
    double cpu_time_used;

    // Initialize matrices with random values
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = rand() % 100;
            b[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 10; i++) {
        start = clock();
        
        multiply_auto(a, b, result_auto);
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Time taken by multiply_auto: %f seconds\n", cpu_time_used);
    }

    start = clock();
    multiply_register(a, b, result_register);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken by multiply_register: %f seconds\n", cpu_time_used);

    start = clock();
    multiply_auto(a, b, result_auto);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken by multiply_auto: %f seconds\n", cpu_time_used);

    start = clock();
    multiply_register(a, b, result_register);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken by multiply_register: %f seconds\n", cpu_time_used);

    return 0;
}
