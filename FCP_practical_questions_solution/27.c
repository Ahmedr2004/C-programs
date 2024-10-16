#include<stdio.h>
int ** transpose(int m1[3][3] )
{
    int m2[3][3];
    for(int a = 0 ; a<3 ; a++)
    {
        for(int b = 0 ; b<3 ; b++)
        {
            m2[b][a]= m1[a][b];
        }
        
    }
    printf("The transpose of the array is \n");
    for(int a = 0 ; a<3 ; a++)
    {
        for(int b = 0 ; b<3 ; b++)
        {
            printf("%d\t",m2[a][b]);
        }
        printf("\n");
    }
    return m2;
}

int main()
{
    int m1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int **a = transpose(m1);
    return 0;
}
