#include<stdio.h>
int func(int b , int c){
    printf("%d", b/c);
    return b/c;
}

int main(){
    int b , c;
    scanf("%d%d", &b , &c);
    int a = func(b,c);
    printf("%d", a);
}