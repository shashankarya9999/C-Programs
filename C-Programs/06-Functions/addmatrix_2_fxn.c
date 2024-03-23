#include<stdio.h>	//Work on this later

void addmats( int m, int n, int a[][n], int b[][n] );

int main()
{
	int m1,m2,n1,n2,i,j;

	printf("Enter the number of rows and columns: ");
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
                        scanf( "%d",&matrix1[i][j] );
                }
        }

        printf("The Second matrix is: \n");

        for( i=0; i<m2; i=i+1 )
        {
                for( j=0; j<n2; j=j+1 )
                {
                        printf("%d\t",matrix1[i][j]);
                }

        printf("\n");
        }

	if( m1 == m2 && n1 == n2 )	addmats( m1, n1, matrix1, matrix2 );
	
	else	printf("Addition of the two matrices is not possible.\n");

	return 0;
}

void addmats( int m, int n, int a[][n], int b[][n] )
{
	int i,j;

	int C[m][n];

	for( i=0; i<m; i=i+1 )
	{
		for( j=0; j<n; j=j+1 )
		{
			C[i][j] = 0;
		}
	} 
	
	for( i=0; i<m; i=i+1 )
	{
		for( j=0; j<n; j=j+1 )
		{
			C[i][j] = a[i][j] + b[i][j];	
		}
	}	

	printf("The Resultant matrix is: \n");

	for( i=0; i<m; i=i+1 )
	{
		for( j=0; j<n; j=j+1 )
		{
			printf("%d\t",C[i][j]);		
		}
	printf("\n");	
	}
}
