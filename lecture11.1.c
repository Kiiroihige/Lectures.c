#include<stdio.h>
#include<stdlib.h>

int main()
{
    //  LOOPS   :   FACTORIAL   COUNTER
    int user_input,i;
    int factorial=1;

    printf("NUMBER              :   ");
    scanf("%d",&user_input);

    for(i=1;i<=user_input;i++)
    {
        factorial=factorial*i;

    }

    printf("FACTORIAL NUMBER    :   %d\n",factorial);
    return 0;
}