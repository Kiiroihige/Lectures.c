#include<stdio.h>
#include<stdlib.h>

int main()
{
    //  SWITCH CASE
    int number;
    printf("Number of the month : ");
    scanf("%d",&number);

    switch (number)
    {
    case 1:
        printf("January\n");
        break;
    
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;        
    default:
        break;
    }

    return 0;
}