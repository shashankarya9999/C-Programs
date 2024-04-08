#include<stdio.h>

void concat( char str1[], char str2[] );

int main()
{
	char str1[20], str2[20];

	printf("Enter the first string: ");
	fgets( str1, 20, stdin );
	
	printf("Enter the second string: ");
	fgets( str2, 20, stdin );

	concat( str1, str2 );
	
	return 0;
}

void concat( char str1[], char str2[] )
{
	char str3[40];
	int i=0, j=0;

	while( str1[i] != '\0' )
	{
		str3[i] = str1[i];
		i++;
	}

	i = i - 1;

	str3[i] = ' ';

	while( str2[j] != '\0' )
	{
		str3[i] = str2[j];
		i++;
		j++;
	} 

	str3[i] = '\0';

	printf("The concatenated string is: ");
	
	printf("%s",str3);	
}

