#include<stdio.h>

void multiplymat( int p1, int p2, int q1, int q2, int A[][q1], int B[][q2] );

int main()
{
	int m1,m2,n1,n2,i,j;

	printf("Enter number of rows and columns: ");
	scanf("%d%d",&m1,&n1);

	int matrix1[m1][n1];
	
	printf("Enter the elements in row-major form: ");

        for( i=0; i<m1; i=i+1 )
        {
                for( j=0; j<n1; j=j+1 )
                {
                        scanf( "%d",&matrix1[i][j] );
                }
        }

        printf("The First matrix is: \n");

        for( i=0; i<m1; i=i+1 )
        {
                for( j=0; j<n1; j=j+1 )
                {
                        printf("%d\t",matrix1[i][j]);
                }

        printf("\n");
        }

        printf("Enter the number of rows and columns: ");
        scanf("%d%d",&m2,&n2);

        int matrix2[m2][n2];

        printf("Enter the elements in row-major form: ");

        for( i=0; i<m2; i=i+1 )
        {
                for( j=0; j<n2; j=j+1 )
                {
                        scanf( "%d",&matrix2[i][j] );
                }
        }

        printf("The Second matrix is: \n");

        for( i=0; i<m2; i=i+1 )
        {
                for( j=0; j<n2; j=j+1 )
                {
                        printf("%d\t",matrix2[i][j]);
                }

        printf("\n");
        }

	if( n1 == m2 )	multiplymat( m1, m2, n1, n2, matrix1, matrix2 );

	else	printf("Matrix Multiplication is not possible!\n");

	return 0;
}

void multiplymat( int p1, int p2, int q1, int q2, int A[][q1], int B[][q2] )
{
	int resultant[p1][q2];
	int i,j,k;
	int sum=0;

	for( i=0; i<p1; i++ )
	{
		for( j=0; j<q2; j++ )
		{
			resultant[i][j] = 0;
		}
	}

	for( i=0; i<p1; i++ )
	{
		for( j=0; j<q2; j++ )
		{
			for( k=0; k<p2; k++ )
			{
				sum = sum + A[i][k]*B[k][j];
			}

		resultant[i][j] = sum;
		sum=0;
		}
	}	

	printf("The product of the two matrices is:\n");

	for( i=0; i<p1; i++ )
	{
		for( j=0; j<q2; j++ )
		{
			printf("%d\t",resultant[i][j]);
		}
		
	printf("\n");
	}
}
