// This problem is given in Let Us C book(Pg. 125)

#include<stdio.h>

int main()	
{
	int y;
	float x,i;

	printf(" i    y  x\n");

	for( y=1; y<=6; y++ )
	{
		for( x=5.5; x<=12.5; x=x+0.5 )
		{
			printf("%.2f %d %.2f\n",( 2 + y + (0.5*x) ), y,x);
		}
	}

	return 0;
}
