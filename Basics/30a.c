/*#include<stdio.h>
#include<stdio.h>
typedef struct {
    int arr;
    int index;
}duplicate;

int main(){
    int ar = {1,3,10,7,7,2,4,5,9,,10};
    duplicate d = (duplicate)malloc(10*sizeOf(duplicate));
    
    for(int i = 0 ; i<10 ; i++){
        d[i].arr = ar[i];
        d[i].index = i;
    }
    for(int i = 0 ;i<9 ; i++ ){
        for(int j = i+1; j<10 ; j++){
            if(d[i].arr>d[j].arr){
                d[i].arr = d[i].arr^d[j].arr;
                d[j].arr = d[i].arr^d[j].arr;
                d[i].arr = d[i].arr^d[j].arr;
                d[i].index = d[i].index^d[j].index';
                d[j].index = d[i].index^d[j].index';
                d[i].index = d[i].index^d[j].index';
            }
        }
    }

    int temp = 0;
    for(int i = 0 ; i < 9 ; i++){
        if(temp != d[i].arr || i == 0){
            temp = d[i].arr;
            if(d[i].arr == d[i+1].arr){
                printf("The number %d is duplicated at the indeices : "d[i].arr);
            }
            for(int j = i ; j<n ; j++){
                if(temp == d[j].arr){
                    printf("%d\t", d[j].index);
                }
                else{
                    break;
                }
            }
        printf("\n");
        }
    }
    free (d);
}*/

