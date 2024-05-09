#include<stdio.h>

int compare( char *a, char *b );

int main()
{
	char str1[20], str2[20];
	int flag;

	printf("Enter the first string: ");
	fgets( str1, 20, stdin );

	printf("Enter the second string: ");
	fgets( str2, 20, stdin );

	printf("\nThe entered strings are as follows:\n");
	printf("\nFirst string: %s\n",str1);
	printf("Second string: %s\n",str2);

	flag = compare( str1, str2 );

	if( flag == 0 )		printf("The strings are different\n");
	else			printf("The strings are similar\n");

	return 0;
}

int compare( char *a, char *b )
{
	int flag = 1, i = 0;

	while( a[i] != '\0' && b[i] != '\0' )
	{
		if( a[i] != b[i] )
		{
			flag = 0;
			break;
		}
	
		i++;

		if( a[i] == '\0' )
		{
			if( b[i] != '\0' )	flag = 0;
		}
	
		if( b[i] == '\0' )
		{
			if( a[i] != '\0' )	flag = 0;
		}
	}

	if( flag == 0 )		return 0;
	else 			return 1;
}
