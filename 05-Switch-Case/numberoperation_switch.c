#include<stdio.h>

void factorial( int n )
{
	int i;
	int var = 1;
	
	for( i=1; i<=n; i++ )	var = var * i;
	
	printf("Factorial is: %d\n",var);
}

void prime( int n )
{
	int i=2;
	
	while( i <= n - 1 )
	{
		if( n % i == 0 )
		{
			printf("Not a Prime number\n");
			break;
		}
		
		i++;
	}
	
	if( i == n )	printf("Prime number\n");
}

void even_odd( int n )
{
	if( n % 2 == 0 )	printf("Even\n");
	else			printf("Odd\n");
}

int main()	// Let us C( Pg. 146 )
{
	int num;
	int ch;

	printf("Enter a number: ");
	scanf("%d",&num);

	while(true)
	{
		printf("\n0 for Factorial\n1 for Prime or not\n2 for Even or Odd\n3 for exit\n");
	        printf("Enter operation index:");
         	scanf("%d",&ch);
		
		switch(ch)
		{
			case 0:
				factorial(num);
				break;
			
			case 1:
				prime(num);
				break;
			
			case 2:
				even_odd(num);
				break;
			
			case 3:
				break;
			
			default:
				printf("Invalid Input!\n");
		}
		
		if( ch == 3 )		
		{
			printf("End!\n");
			break;
		}
	}

	return 0;
}
