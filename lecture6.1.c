#include<stdio.h>
#include<stdlib.h>

int main()
{
    // VARIABLE TYPE : FLOAT
    float age,height,ideal;

    printf("PERSON AGE:            ");
    scanf("%f",&age);
    printf("PERSON HEIGHT:         ");
    scanf("%f",&height);
    
    // IDEAL WEIGHT : (HEIGHT - 100 + AGE / 10)* 0.9
    ideal=(height-100+age/10)*0.9;
    printf("IDEAL WEIGHT:   %f/n",ideal);

    return 0;
}