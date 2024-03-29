#include<stdio.h>

int main( int argc, char *argv[] ) 
{
	FILE *p1,*p2;
	char c;

	p1 = fopen( argv[1], "r" );
	p2 = fopen( argv[2], "w" );

	c = getc( p1 );

	while( c != EOF )
	{
		putc( c, p2 );
		c = getc( p1 );   
	}  

	fclose( p1 );
	fclose( p2 );

	return 0;
}
