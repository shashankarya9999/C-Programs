#include<stdio.h>
#define SIZE 4

void fillArray( int anArray[], int numElements );

int main()

{
	int someArray[SIZE];
	int i;

	fillArray( someArray, SIZE );

	for( i=0; i<SIZE; i=i+1 )
	{
		printf("someArray[%d]=%d\n",i,someArray[i]);
	}	

	return 0;
}

void fillArray( int anArray[], int numElements )
{
	int i;
	
	for( i=0; i<numElements; i=i+1 )
	{
		anArray[i]=i;
	}
}
