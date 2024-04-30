#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p,n;

	p = (int *)malloc( n * sizeof(int) );

	printf("Enter number of elements: ");
	scanf("%d",&n);

	printf("Enter elements: ");
	for( int i=0; i<n; i++ )
	{
		scanf("%d",( p + i ));
	}

	printf("The array is: ");
	for( int i=0; i<n; i++ )
	{
		printf("%d ",*( p + i ));
	}
	
	printf("\n");

	int min = *p;

	for( int i=0; i<n; i++ )
	{
		if( min < *( p + i ) )	min = *( p + i );
	}
	
	printf("Minimum = %d\n",*p);  
	
	return 0;
}
