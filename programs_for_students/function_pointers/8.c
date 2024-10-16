#include <stdio.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        return 0; // Error handling for division by zero
    }
}

typedef double (*of)(double, double);

double calculate(double a, double b, of op) {
    return op(a, b);
}

int main() {
    double num1, num2;
    char op;
    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    of func = NULL;

    switch (op) {
        case '+':
            func = add;
            break;
        case '-':
            func = subtract;
            break;
        case '*':
            func = multiply;
            break;
        case '/':
            func = divide;
            break;
        default:
            printf("Invalid operation!\n");
            return 1;
    }
    double result = func(num1 , num2);
    //double result = calculate(num1, num2, func);
    printf("Result: %lf\n", result);

    return 0;
}
