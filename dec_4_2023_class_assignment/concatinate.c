#include<stdio.h>

int main()
{
    int n , m;
    printf("Enter the size of two strings \n");
    scanf("%d%d", &n , &m);
    char str1[n] , str2[m];
    printf("Enter the two strings \n");
    scanf("%s%s", &str1 , &str2);
    char str3[n+m];
    for(int i = 0; i<n ; i++) {
        str3[i] = str1[i];
    }
    for(int j = n ; j < n+m ; j++)
    {
        str3[j] = str2[j-n];
    }
    printf(str3);
    return 0;
}