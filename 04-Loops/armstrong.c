/*

This program prints armstrong numbers from 1 to 1000.

*/

#include<stdio.h>
#include<math.h>

int digit(int); 
int cubic_sum(int);

int main()
{
	int i,num;
	
	for( i=0; i<1000; i++ )
	{
		int sum = 0;
		sum = cubic_sum(i);
		if( i == sum )
		{
			printf("%d\n",i);
		}
	} 	

	return 0;
}

int cubic_sum( int m )
{
	int rem,sum = 0;
	
	while( m != 0 )
	{
		rem = m % 10;
		sum = sum + pow( rem, 3 );
		m = m / 10;
	}
	
	return sum;
}
