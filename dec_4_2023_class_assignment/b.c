#include <stdio.h>
#include<stdlib.h>
int main(){
    char s[10];
    printf("Enter a string");
    scanf("%s",s);
    printf("%s",s);
    free(s);
}