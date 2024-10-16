#include<stdio.h>
int main(){
    int p , p1;
    p = 5;
    p1 = 7;
    printf("Before swapping\np = %d\np1 = %d\n", p,p1);
    int *a = &p;
    int *b = &p1;
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("p = %d\np1 = %d", p,p1);
}