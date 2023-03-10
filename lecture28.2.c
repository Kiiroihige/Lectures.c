#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number;
    int sum;

    while(number!=0)
    {
        printf("Number Until 0: ");
        scanf("%d",&number);
        sum=sum+number;
    }
    printf("Sum: %d\n",sum);

    return 0;
}