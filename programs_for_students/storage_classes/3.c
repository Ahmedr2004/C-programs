#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ITERATIONS 100

void test_auto() {
    volatile auto long long sum = (long long) malloc(sizeof(long long));
    volatile auto long long i = (long long) malloc(sizeof(long long));

    sum = 0;
    for (i = 0; i < NUM_ITERATIONS; i++) {
        sum += i;
    }
    printf("Sum (auto): %lld\n", sum);
}

void test_register() {
    register long long sum = 0;
    register long long i;

    sum = 0;
    for (i = 0; i < NUM_ITERATIONS; i++) {
        sum += i;
    }
    printf("Sum (register): %lld\n", sum);
}

int main() {
    int N = 10;
    clock_t start, end;
    double cpu_time_used;

    for (int i = 0; i < N; i++) {
        start = clock();
        test_register();
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Time taken by register variable: %f seconds\n", cpu_time_used);
    }
    for (int i = 0; i < N; i++) {
        start = clock();
        test_auto();
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Time taken by auto variable: %f seconds\n", cpu_time_used);
    }

    // start = clock();
    // test_auto();
    // end = clock();
    // cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    // printf("Time taken by auto variable: %f seconds\n", cpu_time_used);

    // start = clock();
    // test_register();
    // end = clock();
    // cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    // printf("Time taken by register variable: %f seconds\n", cpu_time_used);

    // start = clock();
    // test_auto();
    // end = clock();
    // cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    // printf("Time taken by auto variable: %f seconds\n", cpu_time_used);

    // start = clock();
    // test_register();
    // end = clock();
    // cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    // printf("Time taken by register variable: %f seconds\n", cpu_time_used);


    return 0;
}
