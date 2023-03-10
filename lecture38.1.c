#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    char word[30];
    printf("Word: ");
    scanf("%s",word);
    printf("Word Length: %lu\n",strlen(word));

    return 0;
}