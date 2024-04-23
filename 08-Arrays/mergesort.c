#include<stdio.h>

void merge_sort( int [], int );
void merge( int [], int [], int [], int m );

void swap( int *p, int *q )
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main()	//work on this
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

	merge_sort( a, n );

	printf("The sorted array is: ");
	for( j=0; j<n; j=j+1 )
	{
		printf("%d ", a[j]);
	}

	printf("\n");

	return 0;
}

void merge_sort( int a[], int m )
{
	if( m <= 0 )	return; // base case

	int middle = m / 2;
	int la[middle], ra[m - middle];	
	
	for( int i=0,j=0; i < middle; i++ )
	{
		if( i < middle )
		{
			la[i] = a[i];
		}
			
		else
		{
			ra[j] = a[i];
			j++;
		}
	}
	
	merge_sort( la, m );
	merge_sort( ra, m );
	merge( la, ra, a, m );    
}

void merge( int la[], int ra[], int a[], int m )
{
	int left_size = m / 2;
	int right_size = m - left_size;

	int i=0;
	int l=0;
	int r=0;

	while( l < left_size && r < right_size )
	{
		if( la[l] < ra[r] )	
		{
			a[i] = la[l];
			i++;
			l++;
		}
		
		else
		{
			a[i] = ra[r];
			i++;
			r++;
		}
	}

	while( l < left_size )
	{
		a[i] = la[l];
		i++;
		l++;
	}

	while( r < right_size )
	{
		a[i] = ra[r];
		i++;
		r++;
	}
}
