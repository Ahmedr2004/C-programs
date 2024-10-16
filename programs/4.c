#include<stdio.h>

int largest_element(int *a , int size){
    int temp = a[0];
    for(int i = 1 ; i<size ; i++){
        if(temp<a[i]){
            temp = a[i];
        }
    }
    return temp;
}

int main(){
    printf("Enter the size of the array \n");
    int n;
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements of array\n");
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &ar[i]);
    }
    int max = largest_element(&ar,n);
    int b = 0 , a = 0;
    for(int i = 1 ; i<max ; i++){
        b = 0;
        for(int j = 0 ; j<n ; j++){
            if(ar[j] == i){
                b = 1;
                break;
            }
        }
        if(b == 0){
            a++;
            b = i;
            break;
        }
    }
    if(a == 1)
    printf("%d", b);
    else
    printf("%d", max+1);
}