#include<stdio.h>

/*Assumptions:
1. matrices are square matrices
2. Order(n) of matrix is 5 , 1<=n<=5
3. max value in a cell
4. it relmantain 1<=a[i][j]<=3
prod_mat = mat_1 * mat_2
<return type> get_matrix_product()*/

int ** get_mat_product(int m1[3][3] , int m2[3][3])
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
    return mp;
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
    int **p;
    p = get_mat_product(m1,m2);
    /*int mp[3][3];
    for(int a = 0 ; a<=2 ; a++)
    {
        for(int b = 0 ; b<=2 ; b++)
        {
            mp[a][b] = 0;
        }
    }
    printf("The product of m1 and m2 \n");
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
    for(int a = 0 ; a<=2 ; a++)
    {
        for(int b = 0 ; b<=2 ; b++)
        {
            printf("%d\t",mp[a][b]);
        }
        printf("\n");
    }*/
    return 0;
}