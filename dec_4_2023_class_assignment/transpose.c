#include<stdio.h>

int main()
{
    int ar[5][5] ;
    printf("Enter the elements of the array \n");
    for(int a = 0 ; a<5 ; a++)
    {
        for(int b = 0 ; b<5 ; b++)
        {
            scanf("%d", &ar[a][b]);
        }
    }
    printf("The transpose of the array is \n");
    for(int a = 0 ; a<5 ; a++)
    {
        for(int b = 0 ; b<5 ; b++)
        {
            printf("%d\t",ar[b][a]);
        }
        printf("\n");
    }
    return 0;
}