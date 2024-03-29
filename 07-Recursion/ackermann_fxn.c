#include<stdio.h>

int Ackermann( int a, int b );

int main()
{
	int x,y,A;

	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of y: ");
	scanf("%d",&y);

	A = Ackermann( x,y );

	printf("The Ackermann value is: %d\n",A);

	return 0;	
}

int Ackermann( int a, int b )
{
	if( a == 0 )		return ( b+1 );

	else if( b == 0 )	return ( Ackermann( a-1, 1 ) );

	else			return ( Ackermann( a-1, Ackermann( a, b-1 ) ) );
}
