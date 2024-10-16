#include<stdio.h>

int main()
{
    int m1[3][3] = {{10,23,38},{8,4,6},{34,80,99}};
    int m2[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int m3[3][3];
    for(int i = 0 ; i<=2 ;i++)
    {
        for(int j = 0 ; j<=2 ; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("The addition of m1 and m2 is: \n");
    for(int i = 0 ; i<=2 ; i++){
        for(int j = 0 ; j<=2 ; j++){
            printf("%d\t", m3[i][j] );
        }
        printf("\n");
    }
}