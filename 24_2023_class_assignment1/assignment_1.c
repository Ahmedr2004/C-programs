#include<stdio.h>

int main()
{
    int i;
    unsigned int ui;
    float f;
    double d;
    char c;
    char str[100];
    long lint;
    unsigned long ulint;
    long long llint;
    unsigned long long ullint;
    long double ld;
    short sint;

    printf("Enter an integer \n");
    scanf("%d" , &i);
    printf("You entered %d\n", i);

    printf("Enter an unsigned integer \n");
    scanf("%u" , &ui);
    printf("You entered %u\n", ui);

    printf("Enter a float \n");
    scanf("%f" , &f);
    printf("You entered %f\n", f);

    printf("Enter a double \n");
    scanf("%lf" , &d);
    printf("You entered %lf\n", d);

    printf("Enter a long double \n");
    scanf("%ld" , &ld);
    printf("You entered %ld\n", ld);

    printf("Enter a character \n");
    scanf("%c" , &c);
    printf("You entered %c\n", c);

    printf("Enter a string \n");
    scanf("%s" , &str);
    printf("You entered %s\n", str);

    printf("Enter a long integer \n");
    scanf("%ld" , &lint);
    printf("You entered %ld\n", lint);

    printf("Enter a unsigned long integer \n");
    scanf("%lu" , &ulint);
    printf("You entered %lu\n", ulint);

    printf("Enter a long long integer \n");
    scanf("%lli" , &llint);
    printf("You entered %lli\n", llint);

    printf("Enter an unsigned long integer \n");
    scanf("%llu" , &ullint);
    printf("You entered %llu\n", ullint);

    printf("Enter a short integer \n");
    scanf("%hi" , &sint);
    printf("You entered %hi\n", sint);

    return 0;
}