#include <stdio.h>

double power(double base, int exp) {
    if (exp == 0)
        return 1;
    else if (exp > 0)
        return base * power(base, exp - 1);
    else
        return 1 / power(base, -exp);
}
double power_tail_rec(double base , int exp , double accumulator){
    if(exp == 0){
        return accumulator;
    }
    else
        return power_tail_rec(base , exp-1 , base*accumulator);
}

int main() {
    double base = 2.0;
    int exp = 3;
    printf("Power: %.4f", power_tail_rec(base, exp , 1));

    return 0;
}
