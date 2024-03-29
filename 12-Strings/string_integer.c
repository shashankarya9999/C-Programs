#include<stdio.h>

int str_int( char * );     

int main()
{
	char name[]="123";

	int n = str_int( name );

	printf("Integers: %d\n",n);
	return 0;
}

int str_int( char *s )
{
	int num = 0;
	for( int i=0; s[i] != '\0'; i++ )
	{
		num = num*10 + ( s[i] - 48 );
	}
	return num;
}
