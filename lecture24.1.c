#include<stdio.h>
#include<stdlib.h>

int main()
{
    int line,column,i,j,k,l;
    printf("Line: ");
    scanf("%d",&line);
    printf("Column: ");
    scanf("%d",&column);

    int sequence[line][column];
    for(i=1;i<=line;i++)
    {
        for(j=1;j<=column;j++)
        {
            printf("Value of Sequence[%d][%d]:",i,j);
            scanf("%d",&sequence[i][j]);
        }
    }
    for(k=1;k<=line;k++)
    {
        for(l=1;l<=column;l++)
        {
            printf(" %d ",sequence[k][l]);
        }
        printf("\n");
    }

    return 0;
}