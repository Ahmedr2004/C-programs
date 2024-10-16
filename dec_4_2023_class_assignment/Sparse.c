#include<stdio.h>

int ** get_mat_product(int m1[5][5])
{
    int c = 0;
    for(int a = 0 ; a<5 ; a++)
    {
        for(int b = 0 ; b<5 ; b++)
        {
            if(m1[a][b] != 0)
            {
                c++;
            }
        }
    }
    int ar[c][3];
    int d = 0;
    for(int a = 0 ; a<5 ; a++)
    {
        for(int b = 0 ; b<5 ; b++)
        {
            if(m1[a][b] != 0)
            {
                ar[d][0] = m1[a][b];
                ar[d][1] = a;
                ar[d][2] = b;
                d++;
            }
        }
    }
    
    printf("The sparse matrix is \n");
    for(int i = 0 ; i<c ; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }
    return ar;

}

int main()
{
    int m1[5][5] ;
    int **p;
    printf("Enter the elements of sparse matrix \n");
    for(int a = 0 ; a<5 ; a++)
    {
        for(int b = 0 ; b<5 ; b++)
        {
            scanf("%d", &m1[a][b]);
        }
    }
    
    p = get_mat_product(m1);
    return 0;
}