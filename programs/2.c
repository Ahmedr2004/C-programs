#include<stdio.h>
#define DEBUG

int main()
{
    #ifdef DEBUG
        printf("Debugging is enabled \n");
        printf("Inside the main()");
    #endif

    return 0;

}
