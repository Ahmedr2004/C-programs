#include<stdio.h>

int Factorial(int n)
{
    int f = 1;
    for(int i = n ; i > 0 ; i--){
        f *= i;
    }
    return f;
}
int main(){
    printf("Enter a number\n");
    int n;
    scanf("%d", &n);
    int f =Factorial(n);
    printf("Factorial = %d", f);
    return 0;
}