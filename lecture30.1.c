#include<stdlib.h>
#include<stdio.h>

int main()
{
    int fee,handbaggage,baggage;
    printf("Handbaggage: ");
    scanf("%d",&handbaggage);
    printf("Baggage: ");
    scanf("%d",&baggage);

    if(handbaggage<=10 && baggage<=12)
    {
        fee=0;
    }
    else
    {
        fee=((handbaggage-10)*4)+((baggage-12)*2);
    }

    printf("Fee: %d euro\n",fee);
    return 0;
}