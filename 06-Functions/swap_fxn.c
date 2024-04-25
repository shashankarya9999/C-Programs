#include<stdio.h>

void tempvar_swap( int x, int y );
void notempvar_swap( int p, int q );

int main()
{
	int a,b;

	printf("Enter two integer values: \n");
	scanf("%d%d",&a,&b);

	printf("Entered values are: a = %d, b = %d\n",a,b);

	tempvar_swap( a, b );
	notempvar_swap( a, b );
	
	printf("The values in main function: a = %d, b = %d\n",a,b);
	
	return 0;
}

void tempvar_swap( int x, int y )
{
	int temp;
	temp = x;
	x = y;
	y = temp;

	printf("Swapping with temporary variable: a = %d, b = %d\n",x,y);
}

void notempvar_swap( int p, int q )
{
	p = p + q;
	q = p - q;
	p = p - q;

	printf("Swapping without temporary variable: a = %d, b = %d\n",p,q);
}
