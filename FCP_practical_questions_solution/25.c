#include<stdio.h>
int Sum_Of_Diagonal(int m1[3][3]){
    int sum = 0;
    for(int i = 0 ; i<3 ; i++){
        sum += m1[i][i];
    }
    return sum;
}
int main()
{
    int m1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int p;
    p = Sum_Of_Diagonal(m1);
    printf("The sum of diagonal elements of the matrix is %d", p);
    return 0;
}