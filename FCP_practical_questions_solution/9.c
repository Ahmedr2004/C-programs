#include<stdio.h>

int max(int m[],int n){
    
    int l = m[0];
    for(int i = 1 ; i<n ; i++){
        if(m[i]>l)
        l = m[i];
    }
    return l;
}
int min(int m[],int n){
    
    int l = m[0];
    for(int i = 1 ; i<n ; i++){
        if(m[i]<l)
        l = m[i];
    }
    return l;
}
int average(int m[],int n){
    
    int l = 0;
    for(int i = 0 ; i<n ; i++){
        l+=m[i];
    }
    return l/n;
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
    int a = max(ar,n);
    printf("Maximum element in the array %d\n", a);
    int b = min(ar,n);
    printf("Minimum element of array is%d\n" , b);
    int c = average(ar , n);
    printf("Average element of array %d\n", c);
    return 0;
}