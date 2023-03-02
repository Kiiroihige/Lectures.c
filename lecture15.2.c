#include<stdio.h>
#include<stdlib.h>

int main()
{
    char lesson;
    printf("Initials: ");
    scanf("%s",&lesson);

    switch (lesson)
    {
    case 'g':
        printf("Grammar\n");
        break;
    case'm': printf("Maths\n"); break;
    case's': printf("Science\n"); break;
    case'c': printf("Chemistry\n"); break;     
    
    default:
        break;
    }

}
