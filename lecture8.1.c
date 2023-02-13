#include<stdio.h>
#include<stdlib.h>

int main()
{
    // CONDITIONALS:    IF ELSE
    int gpa,midterm,final,thesis;
    printf("Midterm :   ");
    scanf("%d",&midterm);
    printf("Final   :   ");
    scanf("%d",&final);
    printf("Thesis  :   ");
    scanf("%d",&thesis);

    gpa=(midterm+final+thesis)/3;

    if (gpa>=50)
    {
        printf("GPA     :   %d  You Passed :)\n",gpa);
    }
    else
    {
        printf("GPA     :   %d  You Failed :(\n",gpa);
    }
    return 0;
}