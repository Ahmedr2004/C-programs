#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ar;
    int size;

    printf("Enter the size of the array \n");
    scanf("%d",&size);

    ar = (int *)calloc(size,sizeof(int));
    
    printf("The initialized elements of the array are\n");
    
    for(int i = 0 ; i  < size ; i++){
        printf("%d ",ar[i]);
    }

    free(ar);

    return 0;
}