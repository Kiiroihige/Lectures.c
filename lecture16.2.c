#include<stdio.h>
#include<stdlib.h>

int main()
{
    int operation;
    int x,y,result;
    x=6;
    y=5;
    printf("x = 3 and y = 5\n\n");
    printf("********** MATH PROBLEMS **********\n");
    printf("1. Circle and Area of a Square( Side is x)\n");
    printf("2. Circle and Area of a Square(A side is x, B side is y\n");
    printf("3. (x*5)/(y+5)=?\n");
    printf("4. Circle and Area of a Round(Radius is y)\n\n");
    printf("Operation: ");
    scanf("%d",&operation);

    switch(operation)
    {
        case (1): 
            printf("Circle of a Square: %d\n",(x*4));
            printf("Area of a Square: %d\n",(x*x));
            break;
        case (2):
            printf("Circle of a Square: %d\n",2*(x+y));
            printf("Area of a Square:   %d\n",(x*y));
            break;
        case (3):
            printf("(x*5)/(y+5)= %d\n",(60/10));
            break;
    }



return 0;    
}