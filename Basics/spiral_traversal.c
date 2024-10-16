#include<stdio.h>

void spiral(int a[3][3], int r , int c){
    int k = 0;
    int l = 0;
    for(;k<r && l<c;){
        for(int i = l ; i<c ; i++){
            printf("%d  ",a[k][i]);
        }
        k++;
        for(int i = k ; i<r ; i++){
            printf("%d  ",a[i][c-1]);
        }
        c--;
        if(k<r){
        for(int i = c-1 ; i>=l ; i--){
            printf("%d  ",a[r-1][i]);
        }
        r--;
        }
        if(l<c){
        for(int i = r-1 ; i>=k ; i--){
            printf("%d  ",a[i][l]);
        }
        l++;
        }
    }
}

int main(){
    int r = 3 , c = 3;
    int a[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    spiral(a,3,3);
    return 0;
}