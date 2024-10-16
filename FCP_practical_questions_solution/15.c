#include<stdio.h>

int nCr(int n , int r)
{
    int f = 1;
    for(int i = n ; i > 0 ; i--){
        f *= i;
    }
    int g = 1;
    for(int i = r ; i > 0 ; i--){
        g *= i;
    }
    int h = 1;
    int b = n-r;
    for(int i = b ; i>0 ; i--){
        h *=i;
    }
    int k = f/g;
    int l = k/b;
    return l;
}
int main(){
    printf("Enter a n and r for nCr \n");
    int n, r;
    scanf("%d%d", &n , &r);
    int f =nCr(n,r);
    printf("nCr =\n%d", f);
    return 0;
}