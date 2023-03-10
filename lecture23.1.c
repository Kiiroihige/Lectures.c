#include<stdio.h>
#include<stdlib.h>

int main()
{
    int sequence[2][2];
    sequence[0][0]=10;
    sequence[0][1]=20;
    sequence[1][0]=30;
    sequence[1][1]=40;

    printf("%d      %d\n",sequence[0][0],sequence[0][1]);
    printf("%d      %d\n",sequence[1][0],sequence[1][1]);

    return 0;
}