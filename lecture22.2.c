#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,length;
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
}
