#include<stdio.h>
int main(){
    int x, y;
    char c;
    while(1<2){
        printf("Enter the operations or x for exitting\n");
        scanf(" %c", &c);
        if(c == 'x'){
        break;}
        printf("Enter the two numbers\n");
        scanf("%d%d",&x,&y);
        switch (c)  {
            case '+' :
            printf("%d\n", x + y);
            break;

            case '-':
            printf("%d\n", x - y);
            break;

            case '*':
            printf("%d\n", x * y);
            break;

            case '/':
            printf("%d\n", x / y);
            break;

            default:
            printf("Invalid Operator\n");
            break;
    }
}
    return 0;
}