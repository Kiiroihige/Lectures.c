#include<stdio.h>
#include<stdlib.h>

int main()
{
    float pi,radius,area,diameter,circumference;
    pi=3.14;
    
    printf("Radius:          ");
    scanf("%f",&radius);

    area=pi*radius*radius;
    diameter=2*radius;
    circumference=2*pi*radius;

    printf("Area:           %f\n",area);
    printf("Diameter:       %f\n",diameter);
    printf("Circumference:  %f\n",circumference);

    return 0;
}