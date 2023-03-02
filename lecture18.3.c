#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numbers[5]={1,2,3,4,5};
    int factorial=1;
    int i;
    for(i=0;i<5;i++)
    {
        factorial=factorial*numbers[i];
        printf("FACTORIAL:  %d\n",factorial);
    }
    return 0;
}