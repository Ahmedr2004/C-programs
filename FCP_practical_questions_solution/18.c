#include<stdio.h>
int main(){
    printf("Enter 1, 2, 3, 4 and 5 for Add, subtract, Divivde, Multiply and exponent respectively \n");\
    int n;
    scanf("%d", &n);
    int o = 1;
    switch (n)
    {
    case 1:
        o = 6+4;
        printf("Addition of 6 and 4 =%d\n", o);
        break;
    case 2:
        o = 6-4;
        printf("Subtraction of 6 and 4 =%d\n", o);
        break;
    case 3:
        o = 6/4;
        printf("Divide of 6 and 4 =%d\n", o);
        break;
    case 4:
        o = 6*4;
        printf("Multiplication of 6 and 4 =%d\n", o);
        break;
    case 5:
        for(int i = 1 ; i<=4; i++){
        o *= 6;
        }
        printf("Exponent of 6 to the power 4 =%d\n", o);
        break;
    default:
        printf("Entered the wrong number");
        break;
    } 
    return 0 ;
}