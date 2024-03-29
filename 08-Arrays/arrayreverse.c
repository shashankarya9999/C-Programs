#include<stdio.h>

void copy_rev( int *, int *, int );

int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);

	int a1[n], a2[n];

	printf("Enter elements: ");
	for( int i=0; i<n; i++ )
	{
		scanf("%d",&a1[i]);
	}
	
	printf("The original array is: ");
	for( int j=0; j<n; j++ )
	{
		printf("%d ",a1[j]);
	}
	printf("\n");
	
	copy_rev( a1, a2, n );
	return 0;
}

void copy_rev( int *p, int *q, int m )
{
	for( int i=0; i<m; i++ )
	{
		q[m-i-1]=p[i];
	}

	printf("The reversed array is: ");
	for( int k=0; k<m; k++ )
	{ 
	 	printf("%d ",q[k]);
	}	
	printf("\n");
}
