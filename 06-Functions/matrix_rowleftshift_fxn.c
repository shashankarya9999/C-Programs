#include<stdio.h>

void left_shift( int *p , int n );
void swap( int *x, int *y )
{
        int temp;
        temp = (*x);
        (*x) = (*y);
        (*y) = temp;
}

int main()	
{
	int m,n;
	printf("Enter number of rows and columns: ");
	scanf("%d%d",&m,&n);

	int mat[m][n];
	
	printf("Enter elements in row-major form: ");
	for( int i=0; i<m; i++ )
	{
		for( int j=0; j<n; j++ )
		{
			scanf("%d",&mat[i][j]);
		}
	}

	printf("The matrix is:\n");
	for( int i=0; i<m; i++ )
        {
                for( int j=0; j<n; j++ )
                {
                        printf("%d ",mat[i][j]);
                }
		
	printf("\n");
        }

	int *p; 
	for( int i=0; i<m; i++ )
	{
		p = mat[i];
		left_shift(p,n);
	}
	
	printf("The re-arranged matrix is:\n");
        for( int i=0; i<m; i++ )
        {
                for( int j=0; j<n; j++ )
                {
                        printf("%d ",mat[i][j]);
                }
		
        printf("\n");
        }

	return 0;
}

void left_shift( int *p, int n )
{
        swap( (p), (p+2) );
        swap( (p+1), (p+4) );
        swap( (p+2), (p+3) );
        swap( (p+1), (p+2) );
}
