#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num >= 0)
    {
        printf("The number is non-negative ");
    }
    else
    {
        printf("The number is not non-negative");
    }
    return 0;
}