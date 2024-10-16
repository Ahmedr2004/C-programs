#include<stdio.h>

int main(){
    int a = 5;
    int *p = &a;
    printf("b = %p \n", p);
    (*p)++;
    printf("a = %p", p);
    return 0;
}