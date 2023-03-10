#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,length,width;
    printf("Length  : ");
    scanf("%d",&length);
    printf("Width   : ");
    scanf("%d",&width);
    
    for(i=1;i<=length;i++)
    {
        for(j=1;j<=width;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}