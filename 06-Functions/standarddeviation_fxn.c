#include<stdio.h>
#include<math.h>

float sum( int n[] )
{
	float sum=0.0;
	
	for( int i=0; i<5; i++ )	sum = sum + n[i];
	
	return sum;
}

float avg( int n[] )
{
	float sum=0.0;
	
	for( int i=0; i<5; i++ )	sum = sum + n[i];

	return ((sum) / 5);
}

float sd( int a , int n[] )
{
	float sum = 0.0;
	
	for( int i=0; i<5; i++ )	sum = sum + pow(( n[i] - a ), 2 );

	float sd = sqrt( sum / 4 );

	return sd;
}

int main()
{
	int num[5];
	int i;
	printf("Enter five integers: ");
	
	for( i=0; i<5; i++ )	scanf("%d",&num[i]);

	float su = sum(num);
	float average = avg(num);
	float s = sd( average, num );
	
	printf("Sum = %f\n",su);
	printf("Average = %f\n",average);
	printf("Standard Deviation = %f\n",s);

	return 0;	
}

