#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[] = "Read the question curiously";
    int size = strlen(s);
    printf("Such occurences are : ");
    for(int i = 0 ;i < size - 1 ; i++){
        if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')){
            if(s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' || s[i+1] == 'u'){
            printf("%c%c   ", s[i], s[i+1]);
            }
        }
    }
    return 0;
}