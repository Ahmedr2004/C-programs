#include <stdio.h>

void auto_function() {
    auto int auto_var = 10; // auto variable
    printf("Inside auto_function, auto_var = %d\n", auto_var);
    auto_var++;
}

int main() {
    auto_function();
    auto_function(); // Demonstrates re-initialization of auto_var
    return 0;
}
