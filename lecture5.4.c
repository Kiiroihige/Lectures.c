#include<stdio.h>
#include<stdlib.h>

int main()
{
    // THE GPA OF A STUDENT
    int vize,final,tez,gpa;
    
    printf("Vize Sonucu:    ");
    scanf("%d",&vize);
    printf("Final Sonucu:   ");
    scanf("%d",&final);
    printf("Tez Sonucu:     ");
    scanf("%d",&tez);

    gpa=(vize+final+tez)/3;

    printf("GPA:  %d\n",gpa);

    return 0;
}