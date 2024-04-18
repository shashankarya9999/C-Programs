#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter the number of integers: ");
	scanf("%d",&n);

	int num[n];
	printf("Enter the integers: ");

	for( i=0; i<n; i++ )	scanf("%d",&num[i]);
	
	int max=num[0], min=num[0];

	for( i=0; i<n; i++ )
	{
		if( num[i] > max )		max = num[i];

		else if( num[i] < min )		min = num[i];
	}	

	printf("The range is: %d\n",max-min);

	return 0;
}
