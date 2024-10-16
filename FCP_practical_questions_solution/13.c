#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the string \n");
    scanf("%d", &n);
    char str[n];
    printf("Enter the String  \n");
    scanf("%s", &str);
    char str2[n];
    int j = 0;
    for(int i = n-1 ; i>=0 ; i--)
    {
        str2[j] = str[i];
        j++;
    }
    printf("The reversed string is = %s\n", str2);
    return 0;


}