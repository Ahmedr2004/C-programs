#include <stdio.h>
#include <stdlib.h>

double ADDITION(double x , double y){
    return x+y;
}

double SUBTRACTION(double x , double y){
    return x-y;
}

double MULTIPLICATION(double x , double y){
    return x*y;
}

double DIVISION(double x , double y){
    if(y != 0){
        return x/y;
    }

    else{
        printf("The denominator is zero");
        exit(0);
    }
}

typedef double (*func_pointer)(double , double);

double calculate(double x , double y , func_pointer func){
    double a = func(x,y);
    return a;
}

int main(){
    char operation ;
    func_pointer func = NULL ;
    double x , y;

    printf("Enter two numbers\n");
    scanf("%lf%lf",&x,&y);

    printf("Enter the operation to be done ('+','-','*','/')\n");
    scanf(" %c",&operation);

    switch(operation){

        case '+' :
        func = ADDITION;
        break;

        case '-' :
        func = SUBTRACTION;
        break;

        case '*' :
        func = MULTIPLICATION;
        break;

        case '/' :
        func = DIVISION;
        break;

        default :
        printf("Invalid Input");

    }

    double b = calculate(x,y,func);
    printf("The solution = %lf ",b);

    return 0;
}