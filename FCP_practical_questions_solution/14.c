#include<stdio.h>
#include<string.h>
int main(){
    char st[] = "Mohammed Ahmed";
    char st2[] = "Abcdefgh";
    int len = strlen(st);
    char str3[len];
    int j = 0;
    for(int i = len-1 ; i>=0 ; i--){
        str3[j] = st[i];
        j++;
    }
    printf("The original string = %s\n",st);
    printf("The reversed string = %s\n",str3);
    int b = 0;
    for(int i = 0 ; i<len ; i++){
        if(str3[i] == st[i]){
            b++;
            break;
        }
    }
    if(b == 0)
    printf("Palindrome\n");
    else
    printf("Not a palindrome\n");
    printf("The size of string = %d\n",len);
    strcat(st,st2);
    printf("The concatinated string is %s",st);
}