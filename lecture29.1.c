#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    int number;
    printf("Number of Triangle: ");
    scanf("%d",&number);

    for(i=0;i<=number;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}