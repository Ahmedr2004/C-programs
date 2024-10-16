#include<stdio.h>

int third_variable_swap(int n1 , int n2){
    int n3;
    n3 = n1;
    n1 = n2;
    n2 = n3;
    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    return 0;
}
int without_third_variable_swap(int n1 , int n2){
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    return 0;
}
int main(){
    int n1 = 7;
    int n2 = 10;
    int a = third_variable_swap(n1,n2);
    int b = without_third_variable_swap(n1 , n2);
    return 0;
}