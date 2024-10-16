#include<stdio.h>

void main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    int b = 0;
    int c = 0;
    for(int j = a ; j>0 ; j/=10)
    {
        c = j%10;
        b = (b*10) +c;

    }
    if(b==a){
        printf("Its a palindrome");
    }
    else
    printf("Its not a palindrome");

}