#include<stdio.h>
int main(){
    int matrix[2][3] = {{1,2,3}, {4,5,6}};
    int (*ptr)[3] = &matrix;
    for (int i = 0 ; i<2 ; i++){
        for(int j = 0; j<3 ; j++){
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
        *++ptr;
        for (int i = 0 ; i<2 ; i++){
        for(int j = 0; j<3 ; j++){
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
}
