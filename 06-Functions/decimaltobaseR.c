#include<stdio.h>

void decimal_baseR( int n, int R );

int main()
{
	int num,r;
	
	printf("Enter a number: ");
	scanf("%d",&num);

	printf("Enter base: ");
	scanf("%d",&r);

	decimal_baseR( num, r );
	
	return 0;
}

void decimal_baseR( int n, int R )
{
	int bin = 0, pos = 1;
	
	while(n)
	{
		bin = bin + pos*( n % R );
		n = n / R;
		pos = pos * 10;
	} 

	printf("Number in base %d is %d\n",R,bin);
}
