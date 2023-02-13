#include <stdio.h>
#include<stdlib.h>

int main()
{
    // LECTURE 3 > SCANF (Boşluktan sonrasını almaz - tek kelimelik inputlar için kullanılır)
    char book[35],writer[25],genre[15],date[4],pages[5];

    printf("Bookname:   ");
    scanf("%s",book);

    printf("Writer:     ");
    scanf("%s",writer);

    printf("Genre:      ");
    scanf("%s",genre);

    printf("Date:       ");
    scanf("%s",date);

    printf("Pages:      ");
    scanf("%s\n",pages);


    printf("Book:   %s      Author:     %s\n",book,writer);
    printf("Genre   %s\n",genre);
    printf("Date:   %s\n",date);
    printf("Pages:  %s\n",pages);

     return 0;
}
