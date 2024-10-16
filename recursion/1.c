//recursion cant be continued intfinitely
#include<stdio.h>

int binary_search(int ar[], int l , int r ,int n){
    int mid = l + ((r-l)/2);
    if(r>=l){
        if(ar[mid] == n){
            return mid;
        }
        else if(n > ar[mid]){
            return binary_search(ar , mid+1 , r , n);
        }
        else{
            return binary_search(ar , l , mid-1 , n);
        }
    }
    else
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,7,8,12,15,16,20,22,24};
    int a = binary_search(arr , 0 , 11 , 7);
    printf("%d", a);
}