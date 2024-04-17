#include<stdio.h>
#include<math.h>

int main()
{
	int num[101];
	
	int limit = sqrt(100);

	int i,j;
	num[0] = 0;

	for( i=1; i<=100; i++ )
	{
		num[i] = i;
	}

	for( i=2; i<limit; i++ )
	{
		if( num[i] == i )
		{
			for( int j=2; i*j<=100; j++ )
			{
				num[i*j] = 0;
			}
		}  		
	}

	printf("The prime numbers are: ");
	for( i=1; i<=100; i++ )
	{
		if( num[i] != 0 && num[i] != 1 )	printf("%d ",num[i]);
	}
	
	printf("\n");
	
	return 0;
}
