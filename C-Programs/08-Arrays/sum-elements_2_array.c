#include<stdio.h>

int main()

{
	int A[10];
	int B[10];
	int C[10];

	int i,j,k;

	for( i=0; i<10; i=i+1 )
	{
		A[i]=i;
	}
	
	for( j=0; j<10; j=j+1 )
	{
		B[j]=j;
	}		
	
	for( k=0; k<10; k=k+1 )
	{
		C[k]=A[k]+B[9-k];
	}

	printf("The First Array is: \n");
	
	for( i=0; i<10; i=i+1 )
	{
		printf("%d ",A[i]);
	}

	printf("\n");

	printf("The Second Array is: \n");

	for( j=0; j<10; j=j+1 )
	{
		printf("%d ",B[j]);
	}

	printf("\n");

	printf("The Third Array is: \n");

	for( k=0; k<10; k=k+1 )
	{
		printf("%d ",C[k]);
	}

	printf("\n");
	
	return 0;
}

