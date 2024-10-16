#include<stdio.h>
int main(){
    int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    printf("The upper triangle of a matrix are \n");
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(j>i){
                printf("%d\t",arr[i][j]);
            }
        }
    }
    return 0;
}