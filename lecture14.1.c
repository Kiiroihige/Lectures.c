#include<stdio.h>
#include<stdlib.h>

int main()
{
//  LOOP    :   WHILE
//  ex  :  even numbers (without 14) until 20
 int i=2;

 while(i<=20)
{
    if (i!=14)
    {
        printf("%d\n",i);
    }
    i=i+2;
}

return 0;
}