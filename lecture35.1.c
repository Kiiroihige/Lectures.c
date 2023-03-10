#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double number,sinus,cosinus;
    printf("Number: ");
    scanf("%lf",&number);
    sinus=sin(number);
    cosinus=cos(number);
    printf("Sinus:   %.3lf\n",sinus);
    printf("Cosinus: %.2lf\n",cosinus);
    return 0;
}