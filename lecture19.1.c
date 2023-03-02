#include<stdio.h>
#include<stdlib.h>

int main()
{
char city[3][15];
int i;

for(i=0;i<3;i++)
{
    printf("City: ");
    scanf("%s",city[i]);
}
printf("*****************\n");
for(i=0;i<3;i++)
{
    printf("City: %s\n",city[i]);
}
    return 0;
}