#include<stdio.h>

int main(){
    printf("Enter a number \n");
    int n;
    scanf("%d", &n);
    
    if(n%2 == 0)
    printf("The number is even\n");
    
    else
    printf("The number is odd");

    return 0;
}
