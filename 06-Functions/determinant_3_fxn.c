#include<stdio.h>

void det( int m[][3] );

int main()
{
	int mat[3][3];
	int i,j;
	
	printf("Enter the elements in row-major form: ");
	for( i=0; i<3; i++ )
	{
		for( j=0; j<3; j++ )
		{
			scanf("%d",&mat[i][j]);
		}
	}

	printf("The matrix is:\n");
	for( i=0; i<3; i++ )
	{
		for( j=0; j<3; j++ )
		{
			printf("%d ",mat[i][j]);
		}
		
	printf("\n");
	}

	det(mat);

	return 0;
}

void det( int m[][3] )
{
	int d;

	d = m[0][0]*( ( m[1][1]*m[2][2] ) - ( m[2][1]*m[1][2] ) ) - m[0][1]*( ( m[1][0]*m[2][2] ) - ( m[2][0]*m[1][2] ) ) + m[0][2]*( ( m[1][0]*m[2][1] ) - ( m[2][0]*m[1][1] ) );

	printf("Determinant = %d\n",d);
}  
