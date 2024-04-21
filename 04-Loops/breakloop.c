#include<stdio.h>

int main()
{
	int i;
	
	for( i=1; i<10; i=i+1 )
	{
		if( i == 5 )
		{
			break;
		}
		printf("%d",i);
		printf(" ");
	}
	
	printf("\nBroke out of the loop at i=%d \n",i);
	
	return 0;
}
