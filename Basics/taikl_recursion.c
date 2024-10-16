#include<stdio.h>
unsigned long long factorial_tail_rec(int n , unsigned long long accumulator){
    if(n<=1){
        return accumulator;
    }
    else{
        return factorial_tail_rec(n-1,n*accumulator);
    }
}
//Tail recursion as Recursive call is the last statement
//In this you can use the same activation record memory
//Reuse the same memory from the activation record
//It uses less RAM , i.e only one activation record is sufficient
int main(){
    int n = 5;
    unsigned long long a = factorial_tail_rec(n,1);
    printf("%llu", a);
}