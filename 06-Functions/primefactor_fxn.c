#include<stdio.h>

void prime_factor(int m); 

int main()
{
	int n;
	
	printf("Enter a natural number: ");
	scanf("%d",&n);

	printf("Prime factors of %d are: \n",n);
	
	prime_factor(n);
	
	return 0;
}

void prime_factor(int m)
{
	int i;
	
	for( i=2; i<=m; i=i+1 )
	{
		while( m % i == 0 )
		{
			printf("%d",i);
			printf("\n");
			m = m / i;
		}
	}
}
