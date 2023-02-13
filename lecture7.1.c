#include<stdio.h>
#include<stdlib.h>

int main()
{
// DATA TYPE : FLOAT
float wage,raiseratio,raise,salary;
printf("Monthly Wage:   ");
scanf("%f",&wage);
printf("Raise Ratio:    ");
scanf("%f",&raiseratio);

raise=(wage*raiseratio)/100;
salary=(wage+raise);
printf("Raise:          %f\n",raise);
printf("New Salary:     %f",salary);




    return 0;
}