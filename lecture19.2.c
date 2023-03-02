#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sequence[100];
    int i,number;

    printf("Input Number: ");
    scanf("%d",&number);
    printf("\n");

    for(i=0;i<number;i++)
    {
        printf("%d.Number of sequence: ",i+1);
        scanf("%d",&sequence[i]);
    }
    printf("\n\n");

    for(i=0;i<number;i++)
    {
        printf(" %d-",sequence[i]);
    }
    printf("\n");
    
return 0;
    
}
 