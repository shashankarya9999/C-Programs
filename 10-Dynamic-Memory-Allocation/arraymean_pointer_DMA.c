#include<stdio.h>
#include<stdlib.h>

float findMean( int *p, int m );

int main()
{
	int *a, i, n;
	printf("Enter the number of integers: ");
	scanf("%d",&n);

	a = (int *)malloc( n * sizeof(int) );

	printf("Enter the integers: ");
	for( i=0; i<n; i++ )	scanf("%d", a+i);

	printf("The entered array is: ");
	for( i=0; i<n; i++ )	printf("%d ",*(a+i));
	
	printf("\n");

	float ave = findMean( a, n );

	printf("The mean of array elements is %f\n",ave); 

	return 0;
}

float findMean( int *p, int m )
{
	float total = 0.00, avg = 0.00;
	int j;
	int low = *( p + 0 );

	for( j=0; j<m; j++ )	total = total + *( p + j );

	avg = total/m;
	
	return avg;
}
