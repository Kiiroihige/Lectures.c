#include<stdio.h>
#include<stdlib.h>

int main()
{

    int number,sum,digits,decimals,hundreds;
    printf("3 Digit Number: ");
    scanf("%d",&number);
    hundreds=number/100;
    decimals=(number/10)%10;
    digits=number%10;
    sum=hundreds+decimals+digits;
    printf("Sum of 3 Digit Numbers: %d\n",sum);
    return 0;
}