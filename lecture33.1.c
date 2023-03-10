#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double number,flor,ceiling;
    printf("Number: ");
    scanf("%lf",&number);
    flor=floor(number);
    ceiling=ceil(number);
    printf("Floor:   %.f\n",flor);
    printf("Ceiling: %.f\n",ceiling);
    

    return 0;
}