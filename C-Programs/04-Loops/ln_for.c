#include<stdio.h>
#include<math.h>

int main()	//Let Us C( Pg. 125 )
{
	float x;
	printf("Enter a number: ");	
	scanf("%f",&x);
	
	float total = ((x-1)/x) ;
	float var=1.0;

	for( int i=2; i<=7777777; i++ )
	{
		var = 0.5*(var*pow( (x-1)/x,i ));
		total = total + var;
	}

	printf("Total = %f\n",total);
}
