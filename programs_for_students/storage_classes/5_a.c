#include <stdio.h>

int global_var = 10; // Global variable

// Configuration
// int CONFIG_1 = 0;
// int CONFIG_2 = 1;


void increment() {
    global_var++;
}

void print_global_var() {
    printf("Global Variable in 5_a.c: %d\n", global_var);
}
