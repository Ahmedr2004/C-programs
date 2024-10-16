#include<stdio.h>
int main(){
    int n = 7 , n1 = 10;
    int *p = &n , *p1 = &n1;
    printf("Pointers before operations %p\t%p\n", *p , *p1);
    printf("Pointers after increment %p\t%p\n", *p+1 , *p1+1);
    printf("Pointers after decrement %p\t%p\n", *p-1 , *p1-1);
    printf("Pointers after adding 5 %p\t%p\n", *p+5 , *p1+5);
    printf("Pointers after subtracting 5 %p\t%p\n", *p-5 , *p1-5);
    printf("Pointers after subtracting *p1 and *p %p\n", *p1 - *p);
}