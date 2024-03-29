/*

This program takes a 2D matrix as user input and outputs the largest element of the input matrix.

*/

#include<stdio.h>

int largest( int [][4], int, int );

int main()
{
	int num[4][4],m,n,i,j,big;

	printf("Enter the number of rows and column: ");
	scanf("%d %d",&m,&n);

	printf("Enter the elements in row-major order: ");
	
	for( i=0; i<m; i=i+1 )
	{
		for( j=0; j<n; j=j+1 )
		{
			scanf("%d",&num[i][j]);
		}
	}

	printf("The input 2D array is as follows: \n");
	
	for( i=0; i<m; i=i+1 )
	{
		for( j=0; j<n; j=j+1 )
		{
			printf("%d\t",num[i][j]);
		}
	
	printf("\n");
	}

	big = largest( num, m, n );
	printf("The largest element of the array is: %d\n",big);
	
	return 0;
}

int largest( int num[][4], int m, int n )
{
	int i,j,maximum = -9999;
	
	for( i=0; i<m; i=i+1 )
	{
		for( j=0; j<n; j=j+1 )
		{
			if( num[i][j] >  maximum )
			{
				maximum = num[i][j];
			}
		}
	}

	return (maximum);
}
