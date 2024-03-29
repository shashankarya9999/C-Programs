#include<stdio.h>

int main()	//Euclid's Algorithm
{
	int x,y,a,b,r;
	printf("Enter two numbers in descending order: ");
	scanf("%d%d",&a,&b);

	x=a;
	y=b;
	
	while( y!=0 )
	{
		r=x%y;
		x=y;
		y=r;
	}
	printf("The GCD of %d and %d is %d\n",a,b,x);
	return 0;
}
