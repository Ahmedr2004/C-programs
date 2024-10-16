#include<stdio.h>

int Fibonacci(int n){
    if(n == 1 || n == 2){
    return 1;
    }
    else{
        return (Fibonacci(n-1) + Fibonacci(n-2));
    }
}

int main(){
    printf("Enter the term of fibonacci series you want to see\n");
    int n ;
    scanf("%d", &n);
    int f = Fibonacci(n);
    printf("The %dth term of Fibonacci series = %d",n,f);
}