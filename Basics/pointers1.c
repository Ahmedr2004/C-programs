#include<stdio.h>
void print_arr(int arr[] , int size){
    for(int i = 0 ; i<size ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int ar[6] = {1,2,3,4,5,6};
    int *p;
    p =(void*) &ar;
    
    print_arr(ar,6);
    print_arr(p,6);
    
    printf("%d\n", *p);
    print_arr(ar,6);
    print_arr(p,6);

    printf("%d\n", *++p);
    print_arr(ar,6);
    print_arr(p,6);

    printf("%p\n", p);
    printf("%p\n", &ar[1]);
}
