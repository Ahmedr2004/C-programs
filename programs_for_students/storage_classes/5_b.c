#include <stdio.h>
#include "5_a.c"
extern void increment();
extern void print_global_var();
extern int global_var; // Extern variable

int main() {
    printf("Global Variable in 5_b.c before increment: %d\n", global_var);
    increment();
    print_global_var(); // Shows updated value from 5_a.c
    return 0;
}
