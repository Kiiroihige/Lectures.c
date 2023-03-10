#include<stdio.h>
#include<stdlib.h>
int main()
{
    int height,i,j;
    printf("Butterfly Height: ");
    scanf("%d",&height);
    for (i=1;i<=height;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=height-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=height-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}