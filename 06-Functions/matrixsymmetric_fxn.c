#include<stdio.h>

int check_sym( int n, int m[][n] );

int main()
{
	int n;
	printf("Enter order of square matrix: ");
	scanf("%d",&n);

	int mat[n][n];

	printf("Enter elements: ");
	for( int i=0; i<n; i++ )
	{
		for( int j=0; j<n; j++ )
		{
			scanf("%d",&mat[i][j]);
		}
	}

	printf("The matrix is:\n");
	for( int i=0; i<n; i++ )
	{
		for( int j=0; j<n; j++ )
		{
			printf("%d ",mat[i][j]);
		}
		
	printf("\n");
	}

	check_sym( n, mat );
	return 0;
}

int check_sym( int n, int m[][n] )
{
	int t[n][n];
	for( int i=0; i<n; i++ )
	{
		for( int j=0; j<n; j++ )
		{
			t[j][i] = m[i][j];
		}
	}

	printf("The transpose is:\n");
	for( int i=0; i<n; i++ )
	{
		for( int j=0; j<n; j++ )
		{
			printf("%d ",t[i][j]);
		}
		
	printf("\n");
	}	

	int flag = 0;

	for( int i=0; i<n; i++ )
	{
		for( int j=0; j<n; j++ )
		{
			if( m[i][j] != t[i][j] )	
			{
				flag = 1;
				break;
			}		
		}
	}

        if( flag == 0 )         printf("Matrix is symmetric\n");
        else                    printf("Matrix is not symmetric\n");

}
