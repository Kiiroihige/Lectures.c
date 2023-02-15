#include<stdio.h>
#include<stdlib.h>

int main()
{
    int counter=0;
	int i;
	
	for(i=1;i<=41;i+=4)
	{
		counter=counter+i;
	}
	printf("Sum of numbers from '1,5,9..41' : %d\n",counter);

    return 0;
}