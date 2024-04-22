#include<stdio.h>

void fib( int n );

int main()
{
	int num;
	
	printf("Enter numeber of terms: ");
	scanf("%d",&num);

	fib(num);
	
	return 0;
}

void fib( int n )
{
	int i;
	int a=1,b=0,c;
	
	for( i=0; i<n; i=i+1 )
	{
		c = a + b;
		a = b;
		b = c;	
		printf("%d ",a);
	}

	printf("\n");
}
