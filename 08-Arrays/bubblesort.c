#include<stdio.h>

void sort( int [], int );

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

	sort( a,n );

	printf("The sorted array is: ");
	for( j=0; j<n; j=j+1 )
	{
		printf("%d ", a[j]);
	}

	printf("\n");

	return 0;
}

void sort( int b[], int m )
{
	int i,j,temp = 0;
	
	for( i=0; i< m-1; i++ )
	{
		printf("Pass %d: ",i);
		for( j=0; j<m; j++ )
		{
			if( b[j] > b[j+1] )
			{
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		printf("%d ",b[j]);
		}
	printf("\n");
	}	
	
}
