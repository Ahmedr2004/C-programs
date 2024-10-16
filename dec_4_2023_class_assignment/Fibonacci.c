#include<stdio.h>

int main()
{
    int n;
    int ar[100];
    printf("Enter the number of element of fibonacci series\n");
    scanf("%d", &n);
    ar[0] = 1;
    ar[1] = 1;
    for(int i = 2 ; i<100 ; i++)
    {
        ar[i] = ar[i-1] + ar[i-2];
    }
    printf("The nth element of fibonacci series is = %d \n", ar[n-1]);
    return 0;
}