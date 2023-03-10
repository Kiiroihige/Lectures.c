#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int height,i,j,k,l;
    
    printf("Butterfly Height: ");
    scanf("%d",&height);

    for(i=1;i<=height;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=1;k<=height;k++)
    {
        for (l=height;l>=k;l--)
        {
            printf("*");
        }
        printf("\n");
        
    }


    return 0;
}   
	