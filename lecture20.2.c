#include<stdio.h>
#include<stdlib.h>

int main()
{
    int counter,star;
    for(counter=1;counter<=5;counter++)
    {
        for(star=1;star<=counter;star++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}