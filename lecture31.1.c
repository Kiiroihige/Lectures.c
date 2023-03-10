#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double number,result;
    printf("Number: ");
    scanf("%lf",&number);
    result=sqrt(number);
    printf("Square root of number %.1f is %.4f\n",number,result);

    return 0;
}