#include<stdio.h>

int main()
{
	int p,q,r,s,t,u,w,x,y,z,a,b;
	
	p = sizeof( int );
	q = sizeof( float );
	r = sizeof( char );
	s = sizeof( long );
	t = sizeof( long long int );
	u = sizeof( short );
	w = sizeof( unsigned int );
	x = sizeof( double );
	y = sizeof( long double );
	z = sizeof( unsigned char );
	a = sizeof( long unsigned int );
	b = sizeof( long signed int );

	printf("Integer occupies: %d bytes\n",p);
	printf("Float occupies: %d bytes\n",q);
	printf("Char occupies: %d bytes\n",r);
	printf("Long occupies: %d bytes\n",s);	
	printf("Long long int occupies: %d bytes\n",t);
	printf("Short occupies: %d bytes\n",u);
	printf("Unsigned int occupies: %d bytes\n",w);
	printf("Double occupies: %d bytes\n",x);
	printf("Long double occupies: %d bytes\n",y);
	printf("Unsigned char occupies: %d bytes\n",z);
	printf("Long unsigned int occupies: %d bytes\n",a);
	printf("Long signed int occupies: %d bytes\n",b);

	return 0;
}
