#include<stdio.h>

int num_digit( int p );
void num_reverse( int d, int m );

int main()
{
	int n;

	printf("Enter a number: ");
	scanf("%d",&n);

	int digit = num_digit( n );

	printf("The reversed number is: ");
	num_reverse( digit, n );  
	
	return 0;
}
int num_digit( int p )
{
	int counter = 0;
	while( p != 0 )
	{
		p = p/10;
		counter = counter + 1;
	}

	return counter;
}

void num_reverse( int d, int m )
{
	int num[d];

        int i=0;

        while( m != 0 )
        {
                num[i] = m % 10;
                m = m/10;
                i=i+1;
        }

        for( i=0; i<d; i++ )
        {
                if( num[i] < 0 && i==0 )	printf("-");
		if( num[i] < 0 )
		{
				printf("%d",-num[i]);
		}	
		
		else			printf("%d",num[i]);
        }
        printf("\n");
}
