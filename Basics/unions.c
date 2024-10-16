#include <stdio.h>
#include <stdlib.h>

union Data {
    int age;
    float grades;
    char str[100];
};

int main(){
    union Data d;
    d.age = 19;
    d.grades = 10;
    d.str = "Ahmed";
    // d = {19, 10, "Ahmed"};

}