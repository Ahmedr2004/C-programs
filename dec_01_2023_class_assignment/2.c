#include<stdio.h>

int main() {
    int i, j, rows =5;

    // Upper part of the pattern
    for (i = 1; i<= rows; ++i) {
        for (j =1; j<=i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    // Lower part of the pattern
    for (i = rows-1; i >=1; --i ){
        for(j =1; j<=i; ++j ){
            printf("*");

        }
        printf("\n");
    }
}