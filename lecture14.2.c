#include<stdio.h>
#include<stdlib.h>

int main()
{
    //  WHILE LOOP
    //  ex: factorial
    int number,factorial;
    factorial=1;
    printf("Input Number        : ");
    scanf("%d",&number);

    while(number>1)
    {
        factorial=factorial*number;
        number--;
    }
    printf("Factorial Number    : %d\n",factorial);

    return 0;
}