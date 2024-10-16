#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int charToInt(char c) {
    return c - '0';
}
int main(){
    printf("Enter a 16 digit credit card number \n");
    char c[16];
    scanf("%s",c);
    int size = strlen(c);
    int sum = 0;
    int temp = 0;
    if(size == 16){
        for(int i = 14 ; i>=0 ; i -= 2){
            temp = charToInt((c[i]))*2;
            if(temp >= 10){
                temp -= 9;
            }
            sum += temp;
        }
        for(int i = 15 ; i>=0 ; i -= 2){
            temp = charToInt(c[i]);
            sum += temp;
        }
        if(sum %10 == 0){
            printf("Valid credit card number. \n");
        }
        else{
            printf("Not a valid credit card number. \n");
        }
    }
    else{
        printf("Not a 16 digit credit card number");
    }
}