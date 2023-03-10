#include<stdio.h>
#include<stdlib.h>

int main()
{
    int line,column,i,j,k,l,m,n;
    printf("Line: ");
    scanf("%d",&line);
    printf("Column: ");
    scanf("%d",&column);

    int sequence1[line][column];
    int sequence2[line][column];
    for(i=0;i<line;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Input Value Sequence1[%d][%d]: ",i+1,j+1);
            scanf("%d",&sequence1[i][j]);
        }
    }
    for(k=0;k<line;k++)
    {
        for(l=0;l<column;l++)
        {
            printf("Input Value Sequence2[%d][%d]: ",k+1,l+1);
            scanf("%d",&sequence2[k][l]);
        }
    }
    for(m=0;m<line;m++)
    {
        for(n=0;n<column;n++)
        {
            printf(" %d ",sequence1[m][n]+sequence2[m][n]);
        }
        printf("\n");
    }
    
    
    return 0;
}