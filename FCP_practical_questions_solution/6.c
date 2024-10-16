#include<stdio.h>

int main(){
    printf("Enter the size of array\n");
    int n;
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements of the array\n");
    for(int i = 0; i<n ; i++){
        scanf("%d", &ar[i]);
    }
    printf("The odd indexed elements of array are : \n");
    for(int i = 0; i<n ; i++){
        if(i%2 != 0){
            printf("%d", ar[i]);
            printf("\t");
        }
    }
    return 0;
}