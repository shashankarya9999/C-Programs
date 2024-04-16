#include<stdio.h>
#include<math.h>

int main()
{
	float x[11],y[11];

	x[0]=34.22, y[0]=102.43;
	x[1]=39.87, y[1]=100.93;
	x[2]=41.85, y[2]=97.43;
	x[3]=43.23, y[3]=97.81;
	x[4]=40.06, y[4]=98.32;
	x[5]=53.29, y[5]=98.32;
	x[6]=53.29, y[6]=100.07;
	x[7]=54.14, y[7]=97.08;
	x[8]=49.12, y[8]=91.59;
	x[9]=40.71, y[9]=94.85;
	x[10]=55.15, y[10]=94.65;

	static float s[7];
	
	for( int i=0; i<11; i++ )
	{
		s[0] = s[0] + (x[i]*y[i]);
	}
	
	for( int i=0; i<11; i++ )
	{
		s[1] = s[1] + x[i];
	}

	for( int i=0; i<11; i++ )
	{
		s[2] = s[2] + y[i];
	}

	for( int i=0; i<11; i++ )
	{
		s[3] = s[3] + x[i]*x[i];
	}
	
	s[4] = ( s[1]*s[1] );
	
	for( int i=0; i<11; i++ )
	{
		s[5] = s[5] + y[i]*y[i];
	}		

	s[6] = ( s[2]*s[2] );

	float r = ( s[0]-( s[1]*s[2] ) )/(sqrt( 11*s[3] - ( s[4]*s[4] )*( 11*s[5] - ( s[6]*s[6] ) ) ) );

	printf("The correlation coefficient = %f\n",r);
	
	return 0;	
}

