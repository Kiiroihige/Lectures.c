#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,array,sum=0,average,sequence[100];
    printf("Array of the Sequence: ");
    scanf("%d",&array);

    for(i=0;i<array;i++)
    {
        printf("%d.figure of the sequence: ",i+1);
        scanf("%d",&sequence[i]);
    }

    for (i=0;i<array;i++)
    {
        printf("The Sequences: %d\n",sequence[i]);
    }

    for(i=0;i<array;i++)
    {
        sum=sum+sequence[i];
    }
    printf("Sum: %d\n",sum);
    
    for(i=0;i<array;i++)
    {
        average=sum/array;
    }
    printf("Avg: %d\n",average);
    
    return 0;
}