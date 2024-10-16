#include<stdio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int m;
    printf("The binary of n is\n");
    for(int i = sizeof(int)-1 ; i>=0 ; i--){
        m = (n>>i)&1;
        printf("%d",m);
    }
}