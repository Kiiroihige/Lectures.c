#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    for(i=20;i>=2;i-=2)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
    }

    return 0;
}