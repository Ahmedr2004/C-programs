#include <stdio.h>

void static_function() {
    static int static_var = 0; // static variable
    printf("static_var = %d\n", static_var);
    static_var++;
}

int main() {
    for (int i = 0; i < 5; i++) {
        static_function(); // Demonstrates retention of static_var's value
    }
    return 0;
}
