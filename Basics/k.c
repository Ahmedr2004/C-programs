#include<stdio.h>
int main(){
    printf("Enter the size of array\n");
    int n;
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements of the array\n");
    for(int i = 0 ; i<n ; i++){
        scanf("%d", &ar[i]);
    }

    int j = 0;
    while(j<n-1){
        for(int k = j+1 ; k<n ; k++){
            if(ar[k] < ar[j]){
                ar[j] = ar[j] ^ ar[k];
                ar[k] = ar[j] ^ ar[k];
                ar[j] = ar[j] ^ ar[k];
            }
        }
        j++;
    }

    printf("The sorted array : \n");
    for(int i = 0 ; i<n ; i++){
        printf("%d\t", ar[i]);
    }

    int temp = 0;
    int l = 0 ,sum = 0;
    for(int i = 0 ; i<n-1 ; i++){
        if(ar[i] != temp || i == 0){
            temp = ar[i];
            for(int k = i+1 ; k<n ; k++){
                if(ar[k] == ar[i]){
                    l++;
                }
                else{
                    break;
                }
            }
            sum += l;
            l = 0;
        }
    }
    printf("\n%d\n", sum);
    int ar1[n-sum];
    int temp1 = 0;
    int m = 0;
    for(int i = 0 ; i<n ; i++){
        if(ar[i] != temp1 || i == 0){
            temp1 = ar[i];
            ar1[m] = ar[i];
            m++;
        }
    }

    printf("Elements of ar1\n");
    for(int i = 0 ; i<n-sum ; i++){
        printf("%d\t",ar1[i]);
    }

    printf("\nEnter k\n");
    int k ;
    scanf("%d", &k);

    printf("The kth smallest element in the array is\n%d", ar1[k-1]);
}