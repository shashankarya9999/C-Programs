#include<stdio.h>
#include<stdlib.h>

void reverse( int *b, int m );

int main()
{
	int *a, i, n;
	
	printf("Enter the number of integers: ");
	scanf("%d",&n);

	printf("Enter the integers: ");

	a = ( int * )malloc( 5 * sizeof(int) );	

	for( i=0; i<n; i++ )	scanf("%d", a+i);

	printf("The entered array is: ");

	for( i=0; i<n; i++ )	printf("%d ", *(a+i));

	printf("\n");
	
	reverse( a, n );
	
	return 0;
}

void reverse( int *b, int m )
{
	int j;
	printf("The array in reverse order is: ");

	for( j=m-1; j>=0; j-- )
	{
		printf("%d ",*(b+j));
	}

	printf("\n");
}
