#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    printf("Give a number: ");
    scanf("%d",&i);

    if(i%2==0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");

    }
    

    return 0;
}