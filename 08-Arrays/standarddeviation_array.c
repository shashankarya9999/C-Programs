#include<stdio.h>
#include<math.h>

float sum( int na[], int n )
{
	float sum=0.0;
	
	for( int i=0; i<n; i++ )	sum = sum + na[i];

	return sum;
}

float avg( int na[], int n )
{
	float sum=0.0;
	
	for( int i=0; i<n; i++ )	sum = sum + na[i];

	return ((sum)/n);
}

float sd( int a , int na[], int n )
{
	float sum = 0.0;
	
	for( int i=0; i<n; i++ )	sum = sum + pow(( na[i] - a ) , 2);

	float sd = sqrt( sum / ( n - 1 ) );

	return sd;
}

int main()	// Let us C( Pg. 322 )
{
	int num[]={ -6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2 };
	int i;

	int n = ( sizeof( num ) ) / ( sizeof( num[0] ) );

	float su = sum( num, n );
	float average = avg( num, n );
	float s = sd( average, num, n );
	
	printf("Sum = %f\n",su);
	printf("Average = %f\n",average);
	printf("Standard Deviation = %f\n",s);

	return 0;	
}

