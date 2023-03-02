#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numbers[5]={1,2,3,4,5};
    int sum=0;
    int i;

    for(i=0;i<5;i++)
    {
        sum=sum+numbers[i];
        printf("Sum:    %d\n",sum);
    }
   

    return 0;
}