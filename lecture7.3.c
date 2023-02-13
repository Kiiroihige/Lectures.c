#include<stdio.h>
#include<stdlib.h>

int main()
{
    float gpa,grammar,maths,chemistry,art,history;
    printf("Grammar     :       ");
    scanf("%f",&grammar);
    printf("Maths       :       ");
    scanf("%f",&maths);
    printf("Chemistry   :       ");
    scanf("%f",&chemistry);
    printf("Art         :       ");
    scanf("%f",&art);
    printf("History     :       ");
    scanf("%f",&history);

    gpa=grammar*1.2+maths*0.3+chemistry*0.7+art*1.1+history*0.5;

    printf("Your Gpa    :       %f\n",gpa);

    return 0;
}