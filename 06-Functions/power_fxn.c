#include<stdio.h>

int power( int, int );

int main()
{
	int a,b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("%d ^ %d = %d\n",a,b,power(a,b));
	
	return 0;
}

int power( int a, int b )
{
	int result = 1;
	while( b != 0 )
	{
		result = result * a;
		b--;	
	}
	
	return (result);
}   
