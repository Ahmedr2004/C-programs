#include<stdio.h>

int Factorial(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n * Factorial(n-1);
    }
}

int main(){
    printf("Enter the number\n");
    int n;
    scanf("%d", &n);
    int f = Factorial(n);
    printf("The factorial of %d = %d",n,f);
}