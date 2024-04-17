#include<stdio.h>

int factrec( int num );

int main()
{
	int n,f;
	printf("Enter a positive integer: ");
	scanf("%d",&n);

	f = factrec( n );
	printf("The factorial of %d is %d\n",n,f);

	return 0;
}

int factrec( int num )
{
	if( num == 0 || num == 1 )		return 1;
		
	else					return (num * factrec( num-1 ));
}
