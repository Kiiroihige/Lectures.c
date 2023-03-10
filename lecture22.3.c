#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,l,length;
    printf("Length: ");
    scanf("%d",&length);

    for(i=1;i<=length;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(k=1;k<=length;k++)
    {
        for(l=length;l>=k;l--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
    
}