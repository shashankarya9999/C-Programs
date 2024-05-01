#include<stdio.h>

int num_digit( int p );
void sod( int d, int m );

int main()
{
	int n;

	printf("Enter a number: ");
	scanf("%d",&n);

	int digit = num_digit(n);

	sod( digit, n );  
	
	return 0;
}

int num_digit( int p )
{
	int counter = 0;
	
	while( p != 0 )
	{
		p = p / 10;
		counter = counter + 1;
	}

	return counter;
}

void sod( int d, int m )
{
	int num[d];

        int i=0;

        while( m != 0 )
        {
                num[i] = m % 10;
                m = m / 10;
                i = i + 1;
        }

	int sum = 0;

        for( i=0; i<d; i++ )
        {
		sum = sum + num[i];         
        }
	
	printf("\nSum of digits = %d\n",sum);	
}
