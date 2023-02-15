#include<stdio.h>
#include<stdlib.h>

int main()
{
    //  LOOPS   COUNTER :   FIBONACCI
    int i,x,y,z,fibonacci;

    printf("Fibonacci Number:   ");
    scanf("%d",&fibonacci);

    x=1;
    y=1;
    printf("%d\n",x);
    printf("%d\n",y);

    for(i=1;i<=fibonacci;i++)
    {
        z=x+y;
        x=y;
        y=z;
        printf("%d\n",z);
    }
    
    return 0;
}