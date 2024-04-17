#include<stdio.h>

void prime_factor(int m, int counter); 

int main()
{
	int n;
	
	printf("Enter a natural number: ");
	scanf("%d",&n);

	printf("Prime factors of %d are: \n",n);
	
	prime_factor( n, 2 );
	
	return 0;
}

void prime_factor(int m, int counter)
{
	if( m <= 1 )	return;

	else if( m % counter == 0 )
	{
		printf("%d\n",counter);
		prime_factor( m / counter, counter );
	}
	
	else	prime_factor( m, counter + 1 );
}
