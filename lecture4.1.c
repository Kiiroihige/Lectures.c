#include<stdio.h>
#include<stdlib.h>

int main()
{
    //  LECTURE 4.1 VARIABLE TYPE INTEGER
    int number1,number2,addition,extraction,multiplication,division;

    number1=23;
    number2=17;
    addition=number1+number2;
    extraction=number1-number2;
    multiplication=number1*number2;
    division=number1/number2;

    printf("Number 1:   %d\n",number1);
    printf("Number 2:   %d\n",number2);
    printf("Add     :   %d\n",addition);
    printf("Extract :   %d\n",extraction);
    printf("Multiply:   %d\n",multiplication);
    printf("Divide  :   %d\n",division);
    return 0;
}