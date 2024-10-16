#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159//macro definition

float calculate_area();//just the function declaration or function signature

int main()
{
    calculate_area();
}

float calculate_area()//function definition
{
    float area;
    float r = 5.0;
    area = PI*r*r;

    return area;
}


