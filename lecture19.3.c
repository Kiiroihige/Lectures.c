#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,sayi,dizi[100];

    printf("Kaç sayılı dizi olacak?: ");
    scanf("%d",&sayi);

    for(i=0;i<sayi;i++)
    {
        printf("Dizinin %d.sayısı: ",i+1);
        scanf("%d",&dizi[i]);
    }

    for(i=0;i<sayi;i++)
    {
        printf("Dizideki Sayılar: %d\n",dizi[i]);
    }

    return 0;
}