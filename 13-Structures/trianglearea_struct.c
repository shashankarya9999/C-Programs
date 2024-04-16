#include<stdio.h>
#include<math.h>

struct tri
{
	float a;
	float b;
	float d;
};

float area( float a, float b, float d )
{
	float A = 0.5 * a * b * sin(d);
	
	return A;
}

int main()
{
	struct tri t[6];

	t[0].a=137.4, t[0].b=80.90, t[0].d=0.78;
	t[1].a=155.2, t[1].b=92.62, t[1].d=0.89;
	t[2].a=149.3, t[2].b=97.63, t[2].d=1.35;
	t[3].a=160.0, t[3].b=100.25, t[3].d=9.00;
	t[4].a=155.6, t[4].b=68.95, t[4].d=1.25;
	t[5].a=149.7, t[5].b=120.0, t[5].d=1.75;
	
	float A[6];
	int i;
	
	for( i=0; i<6; i++ )	A[i] = area( t[i].a, t[i].b, t[i].d );

	for( i=0; i<6; i++ )	printf("Area of %d th triangular land = %f\n",i,A[i]);

	float max = A[0];
	
	for( i=0; i<6; i++ )
	{
		if( A[i] > max )	max = A[i];
	}
	
	printf("The maximum area is: %f\n",max);

	return 0;
}
