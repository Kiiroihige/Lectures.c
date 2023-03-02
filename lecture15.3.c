#include<stdio.h>
#include<stdlib.h>

int main()
{
    char (initial);
    printf("Number of the weekday: ");
    scanf("%s",&initial);

    switch (initial)
    {
        case 'm': printf("Monday\n"); break;
        case 'u': printf("Tuesday\n"); break;
        case 'w': printf("Wednesday\n"); break;
        case 't': printf("Thursday\n"); break;
        case 'f': printf("Friday\n"); break;

        
        default:
            break;
    }
}
