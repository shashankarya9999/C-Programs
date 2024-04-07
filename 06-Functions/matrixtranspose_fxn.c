#include<stdio.h>

void mat_transpose( int p, int q, int a[][q] );		//Transpose with another array declaration
void mat_transpose2( int p, int q, int a[][q] );	//Transpose without another array declaration

int main()
{
	int m,n,i,j;
	
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&m,&n);

	int mat[m][n];

	printf("Enter the elements in row-major form: ");
	
	for( i=0; i<m; i++ )
	{
		for( j=0; j<n; j++ )
		{
			scanf("%d",&mat[i][j]);
		}
	}

	printf("The matrix is: \n");

	for( i=0; i<m; i++ )
	{
		for( j=0; j<n; j++ )
		{
			printf("%d\t",mat[i][j]);
		}
		
	printf("\n");
	}
	
	mat_transpose2( m, n, mat );

	return 0;
}

void mat_transpose( int p, int q, int a[][q] )
{
	int i,j;
	
	int transpose[q][p];
	
	for( i=0; i<q; i++ )
	{
		for( j=0; j<p; j++ )
		{
			transpose[i][j] = 0;
		}
	}

	for( i=0; i<q; i++ )
	{
		for( j=0; j<p; j++ )
		{
			transpose[i][j] = a[j][i];
		}
	}

	printf("The transpose of given matrix is:\n");

	for( i=0; i<q; i++ )
	{
		for( j=0; j<p; j++ )
		{
			printf("%d\t",transpose[i][j]);
		}
		
	printf("\n");
	}	
}

void mat_transpose2( int p, int q, int a[][q] )
{
	int i,j;

	printf("The transpose of the given matrix is:\n");
	
	for( i=0; i<q; i++ )
	{
		for( j=0; j<p; j++ )
		{
			printf("%d\t",a[j][i]);
		}
		
	printf("\n");
	}
}
