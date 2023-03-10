#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char book[40];
    printf("Bookname: ");
    scanf("%s",book);
    printf("%s\n",book);
    printf("%18s\n",book);
    printf("%6.2s\n",book);


    return 0;
}