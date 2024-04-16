#include<stdio.h>

void reverseNum( int n );

int main()
{
	int num;

	printf("Enter a number: ");
	scanf("%d",&num);

	reverseNum( num );
	
	return 0;
}

void reverseNum( int n )
{
	int rem, reverse=0;

	while( n != 0 )
	{
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n = n / 10;
	}

	printf("Reversed Number: %d\n",reverse);
}
