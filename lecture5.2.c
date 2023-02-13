#include<stdio.h>
#include<stdlib.h>

int main()
{
    //  CIRCLE OF SQUARE WITH USER INPUT - AREA OF SQUARE WITH USER INPUT
        int side,circle,area;

        printf("Square Side: ");
        scanf("%d",&side);

        circle=side*4;
        area=side*side;

        printf("Square Circle: %d\n",circle);
        printf("Square Area: %d\n",area);
        
    return 0;
}