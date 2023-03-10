#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char book[25];
    char writer[25];
    char bookandwriter[50];
    printf("Book and Writer : ");
    scanf("%s%s",book,writer);
    
    strcat(bookandwriter,book);
    strcat(bookandwriter," ");
    strcat(bookandwriter,writer);
    printf("%s\n",bookandwriter);
}