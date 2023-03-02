#include<stdio.h>
#include<stdlib.h>

int main()
{
    // ARRAYS   EXAMPLES
    /* int numbers[]={12,15,17,21,23,25,29,31,33};
    int i;

    for(i=0;i<9;i++)
    {    
        printf("Numbers:    %d\n",numbers[i]);
    }
        */

    char name[5]={'B','U','K','E','T'};
    int i;
    for(i=0;i<5;i++)
        {
            printf("%c",name[i]);
        }

    printf("\n");

    return 0;
}