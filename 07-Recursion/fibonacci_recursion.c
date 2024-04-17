#include<stdio.h>

int fibo( int num );

int main()
{
	int n,i;

	printf("Enter the number of terms to generate: ");
	scanf("%d",&n);

	printf("The fibonacci series is as follows:\n");
	
	for( i=0; i<n; i++ )	printf(" %d ",fibo(i));
	
	printf("\n");
	
	return 0;
}

int fibo( int num )
{
	if( num == 0 )		return 0;

	else if ( num == 1 )	return 1;

	else			return ( fibo( num - 1 ) + fibo( num - 2 ) );
}
