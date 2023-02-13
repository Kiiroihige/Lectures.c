#include<stdio.h>
#include<stdlib.h>

int main()
{
/*
    //  VARIABLE CHAR >     VARIABLE TYPE VARIABLE NAME="DATA"
    char book[35]="Journey to the End of the Night";
    char writer[25]="Louis Ferdinand Celine";
    char genre[15]="Fiction";
    char date[4]="1932";
    char pages[5]="927";

    printf("*************** BOOK INFO ***************\n\n\n");
    // n. %s = scan = show in screen
    printf("Book:   %s\n",book);
    printf("Writer: %s\n",writer);
    printf("Genre:  %s\n",genre);
    printf("Date:   %s\n",date);
    printf("Pages:  %s\n",pages);
    
    return 0;
  */

    char book[35]="The Lord of the Rings";
    char writer[25]="J.R.R. Tolkien";
    char genre[15]="Fantasy";
    char date[4]="1954";
    char pages[5]="890";

    printf("*************** BOOK INFO ***************\n\n");
    printf("Book:   %s\    Writer:   %s\n",book,writer);
    printf("Genre:  %s\n",genre);
    printf("Date:   %s\n",date);
    printf("Pages:  %s\n\n",pages);
    printf("*****************************************\n");

    return 0;  
    
   


}
