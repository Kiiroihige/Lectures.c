#include<stdio.h>
#include<stdlib.h>

int main()
{
   int number,sum,i;
   sum=0;
    for(i=1;i<=4;i++)
    {
        printf("%d.Number: ",i);
        scanf("%d",&number);
        sum=sum+number;
    }
    printf("%d\n",sum);
    return 0;
}