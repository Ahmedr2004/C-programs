#include<stdio.h>

int sanke(int m , int n , int a[m][n]){
    for(int i = 0 ; i < m ; i++){
        if(i%2 == 0){
            for(int j = 0 ; j < n ; j++){
                printf("%d ",a[i][j]);
            }
        }
        else{
            for(int j = n - 1 ; j>=0 ; j--){
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0 ;
}

int main(){
    printf("Enter the no. of rows and columns of the matrix\n");
    int r , c;
    scanf("%d%d",&r,&c);
    int ar[r][c];
    printf("Enter the elements of the matrix \n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d", &ar[i][j]);
        }
    }
    int s = sanke(r,c,ar);
    return 0; 
}