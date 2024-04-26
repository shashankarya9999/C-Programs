#include<stdio.h>
#define MAX 20

void convert( char *a );

int main()
{
	char str[30];
	printf("Enter a string: ");
	fgets( str, MAX, stdin );
	
	convert(str);
	
	printf("The converted string is: ");
	puts(str);

	return 0;	
}

void convert( char *a )
{
	for( ;*a != '\0'; a++ )
	{
		if( *a >= 'A' && *a <= 'Z' )
		{
			*a = *a + 32;
		}

		else if( *a >= 'a' && *a <= 'z' )
		{
			*a = *a - 32;
		}
	}	  
}
