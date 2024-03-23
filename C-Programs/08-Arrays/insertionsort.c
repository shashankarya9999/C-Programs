#include<stdio.h>

void insertion_sort( int [], int );

void swap( int *p, int *q )
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main()

{
	int a[10],n,i,j;

	printf("Enter the number of integers: ");
	scanf("%d",&n);

	printf("Enter the integers: ");

	for( i=0; i<n; i=i+1 )
	{
		scanf("%d",&a[i]);
	}

	printf("Array : ");
	for( i=0; i<n; i++ )
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	insertion_sort( a,n );

	printf("The sorted array is: ");
	for( j=0; j<n; j=j+1 )
	{
		printf("%d ", a[j]);
	}

	printf("\n");

	return 0;
}

void insertion_sort( int a[], int m )
{
	for( int i=1; i<m; i++ )
	{
		int key = a[i];
		int j=i-1;
	
		while( j>=0 && a[j] > key )
		{
			swap( &a[j+1], &a[j] );
			j--;
		}
	}  
}
