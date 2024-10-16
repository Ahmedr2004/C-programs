#include<stdio.h>
#define VERSION 1

int main()
{
    #if VERSION == 1
        printf("Version 1 is selected");
    #elif VERSION == 2
        printf("Version 2 is selected");
    #else
        printf("General Version is selected");
    #endif

    return 0;

}