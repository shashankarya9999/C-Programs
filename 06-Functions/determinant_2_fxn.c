#include<stdio.h>

void det( int m[][2] );

int main()
{
	int mat[2][2];

	printf("Enter elements in row-major form: ");
	
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++ )
		{
			scanf("%d",&mat[i][j]);
		}
	}

	for(int i=0; i<2; i++ )
	{
		for(int j=0; j<2; j++ )
		{
			printf("%d ",mat[i][j]);
		}  
		
	printf("\n");
	}
	
	det( mat );
	
	return 0;
}

void det( int m[][2] )
{
	int d;
	
	d = (m[0][0]*m[1][1]) + (m[0][1]*m[1][0]);

	printf("Determinant = %d\n",d);	
}
