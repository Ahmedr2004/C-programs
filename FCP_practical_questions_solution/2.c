#include<stdio.h>

/*float Celsius_to_Fahrenheit(float c){
    float f = ((9/5)*c)+32;
    return f;
}

float Fahrenheit_to_Celsius(float f){
    float c = ((f-32)*(5/9));
    return c;
}

int main(){
    float c = Fahrenheit_to_Celsius(212.0);
    float f = Celsius_to_Fahrenheit(100.0);
    printf("Temperature in celsius =\n%f", c);
    printf("\nTemperature in fahrenheit =\n%f", f);
    return 0;
}*/
#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    // Test the functions
    float celsius_value = 100;
    float fahrenheit_value = 212;

    // Convert Celsius to Fahrenheit
    float result_f_to_c = celsius_to_fahrenheit(celsius_value);
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius_value, result_f_to_c);

    // Convert Fahrenheit to Celsius
    float result_c_to_f = fahrenheit_to_celsius(fahrenheit_value);
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit_value, result_c_to_f);

    return 0;
}
