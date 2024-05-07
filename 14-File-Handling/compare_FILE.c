#include<stdio.h>

int main( int argc, char *argv[] )
{
	FILE *p1,*p2;

	int flag = 0;

	char c1, c2;

	p1 = fopen( argv[1], "r" );
	p2 = fopen( argv[2], "r" );

	c1 = getc(p1);
	c2 = getc(p2);

	while( c1 != EOF && c2 != EOF )
	{
		if( c1 != c2 )
		{
			flag = 1;
			break;			
		}

		else
		{
			c1 = getc(p1);
			c2 = getc(p2);
		}
	}     

	fclose(p1);
	fclose(p2);

	if( flag == 0 )		printf("Files are similar!\n");
	else			printf("Files are different!\n");

	return 0;	
}
