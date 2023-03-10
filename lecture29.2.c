#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int sum=0;
    
    for(i=1;i<=81;i+=4)
    {
        sum=sum+i;
    }
    printf("Sum: %d\n",sum);

    return 0;
}