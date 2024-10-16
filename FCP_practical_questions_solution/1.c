#include<stdio.h>

int Simple_Interest(int p , int r , int t)
{
    int si = p*r*t;
    return si;
}
int main(){
    int s = Simple_Interest(200,2,2);
    printf("Simple Interest =\n%d", s);
    return 0;
}