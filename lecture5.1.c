#include<stdio.h>
#include<stdlib.h>

int main()
{
    // VARIABLE INT - USER INPUT
    int number1,number2,addition,extraction,multiply,divide;


    // & is to be used  as integer indicator
    printf("Number1: ");
    scanf("%d",&number1);

    printf("Number2: ");
    scanf("%d",&number2);

    addition=number1+number2;
    extraction=number1-number2;
    multiply=number1*number2;
    divide=number1/number2;



    printf("Number 1 :  %d\n",number1);
    printf("Number 2 :  %d\n",number2);
    printf("Addition :  %d\n",addition);
    printf("Multiply :  %d\n",multiply);
    printf("Division :  %d\n",divide);
    
    return 0;
}