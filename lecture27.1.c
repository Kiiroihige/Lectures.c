#include<stdio.h>
#include<stdlib.h>

int main()
{
    // 3 DIGITS DIFFERENT NUMBERS
    int counter=0;
    int i;
    int a,b,c;

    for(i=100;i<=999;i++)
    {
        a=i/100;
        b=(i/10)%10;
        c=i%10;
        if(a!=b && a!=c && b!=c)
        {
            counter++;
        }

    } 
    printf("%d\n",counter);

    return 0;
}