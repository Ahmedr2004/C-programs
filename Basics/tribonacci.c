#include<stdio.h>
int tribonacci(int n){
    if(n == 1)
    return 0;
    else if(n == 2)
    return 1;
    else if(n == 3)
    return 1;
    else
    return (tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3));
}
int main(){
    printf("Enter the term of tribonacci series you wanna see\n");
    int n;
    scanf("%d", &n);
    int t = tribonacci(n);
    printf("The term is %d",t);
}