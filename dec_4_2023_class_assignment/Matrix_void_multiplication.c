#include<stdio.h>
void get_mat_product(int m1[3][3] , int m2[3][3])
{
    int mp[3][3];
    for(int a = 0 ; a<=2 ; a++)
    {
        for(int b = 0 ; b<=2 ; b++)
        {
            mp[a][b] = 0;
        }
    }
    for(int i = 0 ; i<=2 ; i++)
    {
        for(int j = 0 ; j<=2 ; j++)
        {
            for(int k = 0 ; k<=2 ; k++)
            {
                mp[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    printf("The product of m1 and m2 \n");
    for(int a = 0 ; a<=2 ; a++)
    {
        for(int b = 0 ; b<=2 ; b++)
        {
            printf("%d\t",mp[a][b]);
        }
        printf("\n");
    }
}

int main()
{
    int m1[3][3] , m2[3][3];
    printf("Enter the elements of m1 \n");
    for(int a = 0 ; a<=2 ; a++)
    {
        for(int b = 0 ; b<=2 ; b++)
        {
            scanf("%d", &m1[a][b]);
        }
    }
    printf("Enter the elements of m2 \n");
    for(int a = 0 ; a<=2 ; a++)
    {
        for(int b = 0 ; b<=2 ; b++)
        {
            scanf("%d", &m2[a][b]);
        }
    }
    get_mat_product(m1 , m2);
    return 0;
}
