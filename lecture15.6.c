#include<stdio.h>
#include<stdlib.h>

int main()
{
    int counter=0;
    int i;
    for(i=1;i<=15;i+=2)
    {
        counter=counter+i;
    }
    printf("Sum of odd Numbers between 1-15: %d\n",counter);
    

    return 0;
}