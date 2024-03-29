#include<stdio.h>

void factfor( int m );

int main()
{
	int n;
	
	printf("Enter a positive integer: ");
	scanf("%d",&n);

	factfor( n );

	return 0;
}

void factfor( int m )
{
	int i,fact=1;
	
	for( i=1; i<=m; i=i+1 )
	{
		fact = fact*i;
	}

	printf("The factorial of %d is %d\n",m,fact);
}

