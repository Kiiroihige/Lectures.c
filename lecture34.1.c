#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double number,logarithm;
    printf("Number: ");
    scanf("%lf",&number);
    logarithm=log10(number);
    printf("Logarithm of %.2f: %.4f\n",number,logarithm);

    return 0;
}