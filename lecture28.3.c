#include<stdio.h>
#include<stdlib.h>

int main()
{
    int hour,i;
    printf("Parking Hour: ");
    scanf("%d",&hour);

    if(hour>0 && hour<=4)
    {
        printf("Fee: 5usd");
    }

    if(hour>4 && hour<=8)
    {
        printf("Fee: 8usd");
    }

    if(hour>8 && hour<=12)
    {
        printf("Fee: 10usd");
    }
    if(hour>12)
    {
        printf("Fee: 12usd");
    }

    return 0;
}