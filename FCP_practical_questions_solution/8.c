#include<stdio.h>

int sum(int m[],int n){
    
    int l = 0;
    for(int i = 0 ; i<n ; i++){
        l+=m[i];
    }
    return l;
}

int main(){
    printf("Enter the size of array\n");
    int n;
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements of the array\n");
    for(int i = 0; i<n ; i++){
        scanf("%d", &ar[i]);
    }
    int a = sum(ar,n);
    printf("The sum of array elements is %d", a);
    return 0;
}