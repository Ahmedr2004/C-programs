#include<stdio.h>

int print_binary(unsigned int i){
    unsigned int j;
    int ar[sizeof(unsigned int)*8];
    int k = sizeof(unsigned int)*8 -1;
    for(unsigned int a = i ; a>0 ; a/=2)
    {
        j = a%2;
        ar[k] = (int)j ;
        k--;
    }
    for( ; k>=0 ; k--)
    {
        ar[k] = '0';
    }
    for(int i = 0 ; i<(sizeof(unsigned int)*8) ; i++)
    {
        printf("%u", ar[i]);
    }
    return 0;
}
/*int print_binary(unsigned int imp){
    char bin_rep[100];
    for(int i = sizeof(unsigned int)*8 - 1 ; i >=0 ; i--)
    {
        printf("%u" , (imp >> i) & 1);

    }
    printf("\n");
    return 0 ;
}*/
int main(){
    
    int a , b;
    printf("Enter two non-negative integer: ");
    scanf("%u , %u", &a, &b);
    
    printf("Binary representation of is: %u ", a);
    print_binary(a);
    
    printf("Binary representation of %u is: ", b);
    print_binary(b);
    
    printf("Bitwise OR (%u|%u) is:%u\n" , a,b , a|b);
    print_binary(a|b);
    
    printf("Bitwise XOR (%u^%u) is:%u\n" , a,b , a^b);
    print_binary(a^b);
    
    printf("Bitwise NOT (~%u) is:%u\n" , a, ~a);
    print_binary(~a);
    
    printf("Left Shift  (%u<<1) is:%u\n" , a, a<<1);
    print_binary(a<<1);
    
    printf("Right Shift (%u>>1) is:%u\n" , a, a>>1);
    print_binary(a>>1);
}