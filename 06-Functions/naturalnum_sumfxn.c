#include<stdio.h>

float sum(int);

int main()
{
	int num;
	printf("Enter the number of terms: ");
	scanf("%d",&num);

	float s = sum( num );
	printf("Sum is: %f\n",s);
	
	return 0;
}

float sum( int n )
{
	if( n == 0 )		return 0;
	
	else if( n == 1 )	return 1;

	else			return ( n + sum( n - 1 ) );
}


