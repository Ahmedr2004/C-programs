#include<stdio.h>
int main(){
    printf("Enter the 5 elements of the array\n");
    int ar[5];
    for(int i = 0 ; i<5 ; i++){
        scanf("%d", &ar[i]);
    }
    printf("Enter the element to be searched \n");
    int n;
    scanf("%d", &n);
    int b = 0 , k = 0;
    for(int i = 0 ; i<5 ; i++){
        if(ar[i] == n){
        b++;
        k = i;
        break;
        }
    }
    if(b == 1){
        printf("The element is at the %d position",k);
    }
    else{
        printf("The number is not found");
    }
}