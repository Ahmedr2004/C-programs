#include <stdio.h>
#include <stdlib.h>

// Macro definition
#define PI 3.14159

// Function Signature
float calculate_area();
float calculate_circumference();
int main() {
    // Function Call
    float m = calculate_area();
    printf("Area = %f", m);
}

// Function Definition
float calculate_area() {

    float area;
    float radius = 5;
    area = PI * radius * radius;
    float k = calculate_circumference();
    printf("Circumference = %f\n",k);
    return area; 
}

//#undef PI

float calculate_circumference() {

    float circ;
    float radius = 5;
    circ = PI * radius * 2;

    return circ;
}
