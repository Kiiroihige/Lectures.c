#include<stdio.h>
#include<stdlib.h>

int main()
{
    int score[10]={2,1,0,2,2,1,1,2,1,0};
    int i;
    int points=0;

    for(i=0;i<10;i++)
    {
        if(score[i]==2)
        {
            points=points+3;
        }
        if(score[i]==0)
        {
            points=points+1;
        }
    }
    if (points<=12)
        {
            printf("Points: %d - Relegated\n",points);
        }
        else
        {
            printf("Points: %d - Avoided Relegation\n",points);
        }

    return 0;
}