#include<stdio.h>

int largest(int m[],int n){
    
    
    int l = m[0];
    for(int i = 1 ; i<n ; i++){
        if(m[i]>l)
        l = m[i];
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
    int a = largest(ar,n);
    printf("Largest element in the array = %d", a);
    return 0;
}