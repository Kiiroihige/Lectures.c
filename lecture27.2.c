#include<stdio.h>
#include<stdlib.h>

int main()
{
    // FULL DIVIDE OF THE INPUT NUMBER
    int i,number;
    printf("Input Number: ");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            printf("%d\n",i);
        }

    }

    return 0;
}