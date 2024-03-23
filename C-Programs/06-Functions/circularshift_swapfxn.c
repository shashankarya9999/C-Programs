#include<stdio.h>

void swap( int *, int * );
void circular_swap( int *, int *, int * );

int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);

	printf("The values are: \n%d %d %d\n",a,b,c);	

	circular_swap( &a,&b,&c );
	return 0;
}

void swap( int *x, int *y )
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void circular_swap( int *a, int *b, int *c )
{
	for( int i=0; i<2; i++ )
	{
		swap( a,b );
		swap( a,c );
		printf("%d %d %d\n",*a,*b,*c);
	}
}
