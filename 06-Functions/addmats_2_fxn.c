/*

This program takes in two 2x2 matrices as input; and then uses a function called addmats to compute and print the sum of the two matrices.

*/

#include<stdio.h>

void addmats( int a[][2], int b[][2] );

int main()
{
	int matrix1[2][2];
	int matrix2[2][2];
	int i,j;

	printf("Enter the elements in row-major form: ");
	
	for( i=0; i<2; i=i+1 )
	{
		for( j=0; j<2; j=j+1 )
		{
			scanf( "%d", &matrix1[i][j] );
		}	
	}

	printf("The first matrix is: \n");
	
	for( i=0; i<2; i=i+1 )
        {
                 for( j=0; j<2; j=j+1 )
                 {
                 	printf( "%d\t", matrix1[i][j] );
                 }

	printf("\n");
        }

	printf("Enter the elements in row-major form: ");

        for( i=0; i<2; i=i+1 )
        {
                for( j=0; j<2; j=j+1 )
                {
                        scanf( "%d", &matrix2[i][j] );
                }
        }

        printf("The second matrix is: \n");

        for( i=0; i<2; i=i+1 )
        {
                 for( j=0; j<2; j=j+1 )
                 {
                        printf( "%d\t", matrix2[i][j] );
                 }

        printf("\n");
        }

	addmats( matrix1, matrix2 );
	
	return 0;
}

void addmats( int a[][2], int b[][2] )
{
	int i,j;

	int C[2][2];

	for( i=0; i<2; i=i+1 )
	{
		for( j=0; j<2; j=j+1 )
		{
			C[i][j] = a[i][j] + b[i][j];
		}		
	}

	printf("\nThe resultant matrix is: \n");

	for( i=0; i<2; i=i+1 )
	{
		for( j=0; j<2; j=j+1 )
		{
			printf("%d\t",C[i][j]);
		}
		
	printf("\n");
	}
}
