#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a;

	a = ( int * )malloc( 4 * sizeof(int) );

	printf("Enter four integers: ");
	for( int i=0; i<4; i++ )	scanf("%d",(a+i));

	printf("The entered integers are: ");
	for( int j=0; j<4; j++ )	printf("%d ",*(a+j));

	printf("\n");

	for( int k=0; k<4; k++ )	printf("The address of %dth element is%p\n",k,(a+k));

	return 0;
}
