#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m1[2][2]={5,10,15,20};
    int m2[2][2]={3,4,5,6};
    int sum[2][2];
    int i,j,k,l;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            printf(" %d ",sum[k][l]);
        }
        printf("\n");
    }

    return 0;
}