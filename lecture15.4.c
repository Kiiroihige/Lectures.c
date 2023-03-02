#include<stdio.h>
#include<stdlib.h>

int main()
{
  char stuff;
  printf("Which stuff do you need:  ");
  scanf("%s",&stuff);

  switch (stuff)
  {
  case 'p':
    printf("Phone\n");
    break;
  
  case'm':
  printf("Mouse\n");
  break;
  
  default:
    break;
  }

}