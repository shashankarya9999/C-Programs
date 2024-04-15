#include<stdio.h>

int main()
{
	int x,y,a,b;
	
	printf("Enter two numbers in descending order: ");
	scanf("%d%d",&a,&b);

	x = a;
	y = b;

	while( x != y )
	{
		if( x > y )	x = x - y;
		else 		y = y - x;
	}
	
	printf("The GCD of %d and %d is %d.\n",a,b,x);
	
	return 0;
}

