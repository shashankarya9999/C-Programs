#include<stdio.h>

void adjoint( int m[][2] );
void swap( int *, int * );

int main()
{
	int mat[2][2];
	int i,j;
	
	printf("Enter elements in row-major form: ");
	for( i=0; i<2; i++ )
	{
		for( j=0; j<2; j++ )
		{
			scanf("%d",&mat[i][j]);
		}
	} 

	for( i=0; i<2; i++ )
        {
                for( j=0; j<2; j++ )
		{
			printf("%d ",mat[i][j]);
                }
	printf("\n");
        }

	printf("The adjoint is:\n");

	adjoint( mat );
	return 0;
}

void adjoint( int m[][2] )
{
	swap( &m[0][0], &m[1][1] );
	for( int i=0; i<2; i++ )
	{
		for( int j=0; j<2; j++ )
		{
			if( j > i || i > j )
			{
				m[i][j] = -m[i][j];
			}
			printf("%d ",m[i][j]);
		}
	printf("\n");
	}
}

void swap( int *p, int *q )
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
