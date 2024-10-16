#include<stdio.h>

int Sum(int n){
    int sum = 0;
    for(int i = n ; i>0 ; i--){
        sum += i;
    }
    return sum;
}

int main(){
    printf("Enter a number \n");
    int n;
    scanf("%d", &n);
    int s = Sum(n);
    printf("Sum = %d", s);
}