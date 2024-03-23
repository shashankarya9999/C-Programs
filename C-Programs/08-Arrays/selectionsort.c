#include<stdio.h>

void selection_sort( int [], int );

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

	selection_sort( a,n );

	printf("The sorted array is: ");
	for( j=0; j<n; j=j+1 )
	{
		printf("%d ", a[j]);
	}

	printf("\n");

	return 0;
}

void selection_sort( int a[], int m )
{
	for( int i=0; i<m; i++ )
	{
		int min = i;
		for( int j=i+1; j<m; j++ )
		{
			if( a[min] > a[j] )	min = j;
		}
	int temp = a[i];
	a[i] = a[min];
	a[min] = temp;
	}  
}
