#include<stdio.h>
#include<stdlib.h>

int main()
{
    // CIRCLE AND AREA OF A RECTENGULAR WITH USER INPUT
    int shortside,longside,area,circle;

   

    printf("What is the longside of the rectengular?:    ");
    scanf("%d",&longside);
    printf("What is the shortside of the rectengular?:   ");
    scanf("%d",&shortside);

     area=shortside*longside;
     circle=2*(shortside+longside); 

    printf("**************** The Rectengular ***************\n\n");
    printf("Area of the rectengular:    %d\n\n",area);
     printf("Circle of the rectengular:  %d\n\n",circle); 
    printf("************************************************\n");
    return 0;
}