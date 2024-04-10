#include<stdio.h>
#include<string.h>

int main()
{
	char string[20];

	printf("Enter a string: ");
	fgets( string, 20, stdin );
	
	puts(string);

	int i = 0;

	while( string[i] != '\0' )
	{
		i = i + 1;
	}

	i = i - 1;	// to remove the newline character taken as part of string by fgets function

	printf("The string length is: %d\n",i);
	
	return 0;
}
