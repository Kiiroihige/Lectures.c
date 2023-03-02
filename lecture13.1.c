#include<stdio.h>
#include<stdlib.h>

int main()
{
    // MOD OPERATOR FOR NUMBER 578
    int number,hundreds,decimals,digits;


        number=578;

        hundreds=number/100;
        printf("Hundreds        :   %d\n",hundreds);

        decimals=number/10;
        decimals=decimals%10;
        printf("Decimals        :   %d\n",decimals);

        digits=number%10;
        printf("Digits          :   %d\n",digits);


    
      return 0;
}