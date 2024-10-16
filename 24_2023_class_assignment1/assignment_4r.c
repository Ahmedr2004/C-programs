#include<stdio.h>
#include<unistd.h>

int main()
{
    int num_sec;
    int i;
    printf("Enter the number of seconds for the countdown : ");
    scanf("%d" , &num_sec);

    for(i = num_sec ; i>=0 ; i--)
    {
        printf("\rCountdown : %d", i);
        //fflush(stdout);(for manually flushing the output)
        sleep(1);

    }
    printf("\n\n Time's up!!\n");
    return 0;
}