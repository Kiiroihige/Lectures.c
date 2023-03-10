#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float result,base,power;
    printf("Base: ");
    scanf("%f",&base);
    printf("Power: ");
    scanf("%f",&power);
    result=pow(base,power);
    printf("%.2f\n",result);

    return 0;
}