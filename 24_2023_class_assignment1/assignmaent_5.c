#include<stdio.h>

int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);
{       //If else part
    printf("If else output");
    if(age>=1 && age<=18)
    {
        printf("\nNABALIGH");
    }
    else if (age>=19 && age<=25)
    {
        printf("\nJUJH RAHA HAI");
    }
    else if (age>=26 && age<=50)
    {
        printf("\nMAR GAYA HAI");
    }
    else if (age>50)
    {
        printf("\nCHODO YAAR");
    }
}
{       //Switch case part
    printf("\nSwitch case output");
    switch (age)
    {
        case 1 ... 18 :
            printf("\nNABALIGH");
            break;
        
        case 19 ... 25 :
            printf("\nJUJH RAHA HAI");
            break;

        case 26 ... 50 :
            printf("\nMAR GAYA HAI");
            break;

        default :
            printf("\nCHODO YAAR");
            break;
    }
}
    return 0;
}