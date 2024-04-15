#include<stdio.h>

int main()
{
	int i,j;
	
	for( i=1; i<5; i=i+1 )
	{
		for( j=1; j<3; j=j+1 )
		{
			if( j % 2 == 0 )	printf("O");
			else 			printf("X");
		}
	
	printf("\n");
	}
	
	return 0;
}

